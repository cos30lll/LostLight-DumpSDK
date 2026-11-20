#include "records.h"
#include "sdk.h"
#include "seeds.h"

#include <filesystem>
#include <fstream>
#include <iostream>
#include <iterator>
#include <stdexcept>
#include <utility>

namespace fs = std::filesystem;

namespace {
msdk::Snapshot frozen_snapshot() {
    using namespace msdk;
    Snapshot snapshot;
    snapshot.source = "static_elf_profile";
    snapshot.hook_status = "not executed (offline export)";

    // The SDK retains the display names from the original build host's demangler.
    // Keep those spellings even when a local toolchain demangles them differently.
    if (std::size(kRttiSeeds) != msdk_type_count) {
        throw std::logic_error("RTTI seed and SDK table counts differ");
    }
    for (std::size_t index = 0; index < std::size(kRttiSeeds); ++index) {
        const auto &seed = kRttiSeeds[index];
        const auto &type = msdk_types[index];
        if (seed.rva != type.rtti_rva) {
            throw std::logic_error("RTTI seed and SDK table ordering differs");
        }
        Rtti record{type.name, seed.name, seed.kind, seed.rva, false, {}};
        for (std::size_t i = 0; i < seed.base_count; ++i) {
            const auto &base = kBaseSeeds[seed.base_start + i];
            record.bases.push_back({base.rtti, base.offset, base.flags});
        }
        snapshot.rtti.push_back(std::move(record));
    }
    for (const auto &seed : kVtableSeeds) {
        auto first = kSlotSeeds + seed.slot_start;
        Vtable record{seed.rtti, seed.address_point, seed.top, false, seed.truncated, {}};
        record.slots.assign(first, first + seed.count);
        snapshot.vtables.push_back(std::move(record));
    }
    for (const auto &seed : kMethodSeeds) {
        snapshot.methods.push_back({seed.module, seed.name, "static_registration_profile",
                                    seed.rva, seed.flags, false});
    }
    return snapshot;
}

void export_metadata(const fs::path &directory, const std::string &json) {
    fs::create_directories(directory);
    // Reserve a distinct staging directory for each writer on the same filesystem.
    fs::path staging;
    for (std::size_t serial = 0; ; ++serial) {
        staging = directory / (".metadata-export-" + std::to_string(serial));
        if (fs::create_directory(staging)) break;
    }
    const auto temporary = staging / "metadata.json";
    try {
        std::ofstream output;
        output.exceptions(std::ios::failbit | std::ios::badbit);
        output.open(temporary, std::ios::binary);
        output << json;
        output.close();
        fs::rename(temporary, directory / "metadata.json");
    } catch (...) {
        std::error_code ignored;
        fs::remove(temporary, ignored);
        fs::remove(staging, ignored);
        throw;
    }
    fs::remove(staging);
}
} // namespace

int main(int argc, char **argv) {
    if (argc != 2) {
        std::cerr << "usage: messiah_offline_export OUTPUT_DIR\n";
        return 2;
    }
    try {
        const auto snapshot = frozen_snapshot();
        export_metadata(argv[1], msdk::snapshot_json(snapshot));
        std::cout << "Exported metadata.json with " << snapshot.rtti.size()
                  << " RTTI records, " << snapshot.vtables.size() << " vtable groups and "
                  << snapshot.methods.size() << " registered wrappers.\n";
    } catch (const std::exception &error) {
        std::cerr << error.what() << '\n';
        return 1;
    }
    return 0;
}

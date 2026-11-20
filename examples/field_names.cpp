#include "sdk.hpp"

#include <cstdio>
#include <cstring>

int main(int argc, char **argv) {
    if (argc != 2) {
        std::fprintf(stderr, "Usage: field_names TYPE_NAME\n");
        return 2;
    }

    bool found = false;
    for (std::size_t i = 0; i < msdk_native_field_count; ++i) {
        const auto &field = msdk_native_fields[i];
        if (std::strcmp(field.owner, argv[1]) == 0) {
            std::printf("%s\t%s\t%s\n", field.name, field.name_status, field.type);
            found = true;
        }
    }
    if (!found) {
        std::fprintf(stderr, "No recovered fields for %s\n", argv[1]);
    }
    return found ? 0 : 1;
}

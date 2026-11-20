cmake_minimum_required(VERSION 3.16)
project(LostLightDumpSDK LANGUAGES C CXX)

add_library(lostlight_dumpsdk STATIC
    sdk/native_catalog.c
    sdk/native_recovered.c
    sdk/sdk.c
)
target_include_directories(lostlight_dumpsdk PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/sdk")
target_compile_features(lostlight_dumpsdk PUBLIC c_std_11 INTERFACE cxx_std_17)

add_subdirectory(exporter)

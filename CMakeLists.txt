cmake_minimum_required(VERSION 3.16)
project(pch-cmake)

add_executable(main main.cpp)
target_precompile_headers(main PRIVATE hello.h)

add_library(catch2_main STATIC catch-main.cpp)
target_include_directories(catch2_main PUBLIC Catch2/single_include/catch2/)

add_executable(catch-test catch-test.cpp)
target_link_libraries(catch-test catch2_main)
target_compile_definitions(catch-test PRIVATE CATCH_CONFIG_FAST_COMPILE CATCH_CONFIG_DISABLE_MATCHERS)
target_precompile_headers(catch-test PRIVATE Catch2/single_include/catch2/catch.hpp)

add_executable(catch-test2 catch-test.cpp)
target_include_directories(catch-test2 PUBLIC Catch2/single_include/catch2/)
target_link_libraries(catch-test2 catch2_main)



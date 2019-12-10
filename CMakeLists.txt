cmake_minimum_required(VERSION 3.16)
project(pch-cmake)

add_executable(main main.cpp)
target_precompile_headers(main PRIVATE hello.h)

add_executable(catch-test catch-test.cpp)
target_compile_definitions(catch-test PRIVATE CATCH_CONFIG_MAIN CATCH_CONFIG_FAST_COMPILE CATCH_CONFIG_DISABLE_MATCHERS)
target_precompile_headers(catch-test PRIVATE Catch2/single_include/catch2/catch.hpp)

add_executable(catch-test2 catch-test2.cpp)
target_include_directories(catch-test2 PUBLIC Catch2/single_include/catch2/)



cmake_minimum_required(VERSION 3.20)

# Compiler and toolchains
set(CMAKE_CXX_COMPILER "/usr/lib64/ccache/clang++")
add_compile_options(-Wall -Wextra -Wpedantic -Werror)
set(CMAKE_TOOLCHAIN_FILE "./build/build/Debug/generators/conan_toolchain.cmake" CACHE STRING "")

# Project
project(openssl_cpp)

find_package(OpenSSL REQUIRED)

# main target
add_executable(main main.cpp)

include_directories(openssl_wrapper_lib)

# link library
target_link_directories(main PRIVATE openssl_wrapper_lib)

install(TARGETS main RUNTIME DESTINATION bin)

cmake_minimum_required(VERSION 3.20)

project(openssl_cpp)

add_compile_options(-Wall -Wextra -Wpedantic -Werror)

add_executable(main main.cpp)

target_link_directories(main PRIVATE openssl_wrapper_lib)

install(TARGETS main RUNTIME DESTINATION bin)

find_package(OpenSSL REQUIRED)

file(GLOB SRC src/*.cpp)

add_library(openssl_wrapper_lib STATIC SRC)

if(OpenSSL_FOUND)
    message("Found OpenSSL in library!")
endif()
message("testing librarry")

target_include_directories(openssl_wrapper_lib PUBLIC include)

target_link_libraries(openssl_wrapper_lib OpenSSL::SSL OpenSSL::Crypto)


include(FindOpenSSL)

message("OpenSLL found = ${OPENSSL_FOUND}")
message("OpenSSL version = ${OPENSSL_VERSION}")
message("OpenSSL include dir = ${OPENSSL_INCLUDE_DIR}")
message("OpenSSL libs = ${OPENSSL_LIBRARIES}")

file(GLOB SRC src/*.cpp)

message("SRC ${SRC}")

add_library(openssl_wrapper_lib STATIC SRC)

target_include_directories(openssl_wrapper_lib PUBLIC include)

target_link_libraries(openssl_wrapper_lib OpenSSL::SSL OpenSSL::Crypto)


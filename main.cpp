#include <iostream>
#include "openssl_wrapper_lib/include/lib.h"

int main() {
    big_number::flags flag = big_number::flags::free;
    std::cout << "Hello, world!" << static_cast<unsigned long>(flag) << std::endl;
    return 0;
}

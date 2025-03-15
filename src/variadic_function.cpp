//
// Created by mrvjc on 3/15/2025.
//

#include "variadic_function.h"

#include <cstdarg>
#include <iostream>

void testVariadicFunction(const int count, ...) {
    va_list args;
    va_start(args, count); // Khởi tạo va_list
    for (int i = 0; i < count; ++i) {
        const int value = va_arg(args, int); // Lấy tham số
        std::cout << value << std::endl;
    }
    va_end(args); // Dọn dẹp va_list
}

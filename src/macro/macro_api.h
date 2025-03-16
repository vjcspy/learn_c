//
// Created by mrvjc on 3/16/2025.
//

#ifndef MACRO_API_H
#define MACRO_API_H

// Khai báo extern để sử dụng trong các file khác
#define DO_API(r, n, p) extern r (*n) p;

#include "api.h"

#undef DO_API

// Hàm khởi tạo API
void testMacro();

#endif // MACRO_API_H
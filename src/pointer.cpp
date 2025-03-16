//
// Created by mrvjc on 3/16/2025.
//

#include "pointer.h"

#include <iostream>
#include <ostream>

void testPointer() {
    const auto p = new int(10);
    std::cout << p << std::endl;
    delete p;
}

void testPointer2() {
    constexpr auto x = 4;
    const auto p = &x;
    std::cout << p << std::endl;
}
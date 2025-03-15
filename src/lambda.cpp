//
// Created by mrvjc on 3/15/2025.
//

#include "lambda.h"
#include <functional>
#include <iostream>

void testlambda() {
    std::function<int(int)> factorial = [&factorial](const int n) -> int {
        if (n <= 1) return 1;
        return n * factorial(n - 1);  // Gọi lại factorial
    };

    std::cout << factorial(10) << std::endl;
}

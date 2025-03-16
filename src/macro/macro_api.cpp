#include "macro_api.h"
#include <cstdio>

#define DO_API(r, n, p) extern  r (*n) p = nullptr;
#include "api.h"
#undef DO_API

void initMacroApi() {
#define DO_API(r, n, p) n = [] p -> r {    \
printf("API name: %s\n", #n);           \
return 0;                              \
};
#include "api.h"
#undef DO_API
}

void testMacro() {
    initMacroApi();
    if (api_test) {
        api_test();
    } else {
        printf("Error init macro!\n");
    }
}

//#include "gcc2msvc.h"
extern "C" {
#include <stdio.h>
}

template <typename T>
T max(T a, T b) {
    return (a > b) ? a : b;
}

int main()
{
    printf("test %d", max(1, 2));
    getchar();
    return 0;
}

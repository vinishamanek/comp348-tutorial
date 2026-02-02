#include <stdio.h>
#ifndef SUM_C
#define SUM_C

#include "sum.h"

int sum(int a, int b) {
    printf("sum: %d + %d = % d\n", a, b, a+b);
    return a + b;
}   

#endif
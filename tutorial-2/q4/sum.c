#include <stdio.h>
#include "sum.h"

int sum(int a, int b) {
    printf("sum: %d + %d = % d\n", a, b, a+b);
    return a + b;
}   

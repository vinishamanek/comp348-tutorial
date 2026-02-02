#include <stdio.h>

int add(int a, int b) {
    int p = 300; // local
    p = p + 100;
    printf("add: %d + %d + %d = % d\n", a, b, p, a+b);
    return a + b + p;
}   


#include <stdio.h>
#include "factorial.c"

long factorial(int n);

int main() {
    int n;
    long f;
    printf("Enter a non-negative integer: ");
    scanf("%d", &n);
    if(n < 0) {
        printf("negative ints are not allowed.\n");
    } else {
        f = factorial(n);
        printf("%d = %ld\n", n, f);
    }
}
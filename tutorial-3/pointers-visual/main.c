#include <stdio.h>

int main() {
    int number = 555;
    int* ptr = &number;
    
    printf("value of number: %d\n", number);
    printf("address of number: %p\n", (void*)&number);
    printf("\n");
    printf("value stored in ptr: %p\n", (void*)ptr);
    printf("value pointed to by ptr: %d\n", *ptr);
    printf("\n");
    
    // change value
    *ptr = 2;
    printf("after *ptr = 2:\n");
    printf("number is now: %d\n", number);
    printf("value stored in ptr: %p\n", (void*)ptr);
    printf("\n");

    // change value again
    *ptr = (int) 9999999999999999; 
    printf("after *ptr = 9999999999999999:\n");
    printf("number is now: %d\n", number);
    printf("value stored in ptr: %p\n", (void*)ptr);
    printf("\n");

    return 0;
}
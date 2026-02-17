#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int x = 10;

    // single pointer
    int *ptr = &x;
    
    // double pointer
    int **double_ptr = &ptr;

    // 1. value of x
    printf("%d \n", x);

    // 2. address of x
    printf("%p \n", &x);

    // 3. value ptr points to 
    printf("%d \n", *ptr);

    // 4. address ptr points to
    printf("%p \n", ptr);

    // 5. address of ptr
    printf("%p \n", &ptr);

    // 6. value of double_ptr 
    printf("%d \n", **double_ptr);

    // 7. address double_ptr points to
    printf("%p \n", double_ptr);

    // 8. address of double_ptr
    printf("%p \n", &double_ptr);

    // 9. value of ptr via double_ptr
    printf("%p \n", *double_ptr);

        
    return 0;
}
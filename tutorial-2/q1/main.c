#include <stdio.h>

int sum(int, int); // declaration (prototype)

int main() { 
    int a, b, s;

    printf("Enter a first integer: ");
    scanf("%d", &a);

    printf("Enter a second integer: ");
    scanf("%d", &b);

    s = sum(a, b);
    printf("\n%d \n", s);
    
    return 0;
}

// definition (implementation)
int sum(int a, int b) { 
    return (a+b);
}


// tutorial questions:

// what happens if i don't have a declaration (prototype)?
// what happens if i change the order of the functions?
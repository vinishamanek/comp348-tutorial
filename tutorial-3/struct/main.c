#include <stdio.h>

// define the person struct 
// 1. using the typedef syntax
// 2. without the typedef syntax

int main() {
    struct person p1;

    p1.name = "vini";
    p1.age = 22;
    printf("%s is %d years old.", p1.name, p1.age);
}
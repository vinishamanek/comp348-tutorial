#include <stdio.h>

// define the person struct 
// 1. using the typedef syntax
// 2. without the typedef syntax

typedef struct {
    int age;
    char *name;
} person;

struct person {
    int age;
    char *name;
};

int main() {
    person p1;
    struct person p2;

    p1.name = "vini";
    p1.age = 22;
    printf("%s is %d years old.", p1.name, p1.age);
    return 0;
}
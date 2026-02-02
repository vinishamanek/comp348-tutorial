typedef union {
    int int_label;
    char char_label;
} package;

#include <stdio.h>

int main() {
    package p;
    p.int_label = 12;

    printf("%d\n", p.int_label);

    p.char_label = 'c';
    printf("%c\n", p.char_label);

    // what is the value of int_label now?
    printf("%d\n", p.int_label);

    return 0;
}
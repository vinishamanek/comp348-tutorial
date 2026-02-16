#include <stdio.h>
#include <stdlib.h>

// static vs automatic vs dynamic memory allocation?

int x = 10;  

int main() {
    
    int y = 50;

    // malloc(sizeof(int)) → sizeof(int) bytes of memory on the heap
    // malloc returns the address of that memory, (int*) casts to "pointer to int" type
    int *z = (int*)malloc(sizeof(int));

    // go to the address stored in z and access the value to put 25 there
    *z = 25;

    // anything missing?
    
    return 0;
}

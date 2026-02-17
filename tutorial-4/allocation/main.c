#include <stdio.h>
#include <stdlib.h>

// static vs automatic vs dynamic memory allocation?

int x = 10; // static  

int main() {
    
    int y = 50; // automatic

    int *z = malloc(sizeof(int));  // dynamic
    *z = 25;

    free(z);
    
    return 0;
}

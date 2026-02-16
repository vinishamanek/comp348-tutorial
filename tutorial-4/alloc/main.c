#include <stdio.h>
#include <stdlib.h>

int main() {
    
    // malloc
    int *arr1 = malloc(3 * sizeof(int));
    
    printf("address: %p\n", arr1);
    printf("malloc values: [%d, %d, %d]\n", arr1[0], arr1[1], arr1[2]);
    
    arr1[0] = 10;
    arr1[1] = 20;
    arr1[2] = 30;
    printf("malloc after setting values: [%d, %d, %d]\n\n", arr1[0], arr1[1], arr1[2]);
    
    
    printf("\n");

    // calloc 
    int *arr2 = calloc(3, sizeof(int));
    
    printf("address: %p\n", arr2);
    printf("calloc values: [%d, %d, %d]\n\n", arr2[0], arr2[1], arr2[2]);
    
    
    printf("\n");

    // realloc
    int *arr3 = realloc(arr1, 5 * sizeof(int));
    arr3[3] = 100;
    arr3[4] = 200;
    
    printf("og address: %p\n", arr1);
    
    printf("new address: %p\n", arr3);
    printf("after realloc: [%d, %d, %d, %d, %d]\n\n", arr3[0], arr3[1], arr3[2], arr3[3], arr3[4]);
    
    free(arr1);
    free(arr2);
    free(arr3);
    
    return 0;
}
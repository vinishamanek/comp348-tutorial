#include <stdio.h>
#include <stdlib.h>

// i want to make a 2D array (3 by 3) 
// use dynamic memory allocation

int main() {
    int rows = 3;
    int cols = 3;

    int** matrix = malloc(rows * sizeof(int*));
    
    // alloc each row
    for (int i = 0; i < rows; i++) {
        matrix[i] = malloc(cols * sizeof(int));
    }
    
    // fill values
    int value = 1;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            matrix[i][j] = value++;
        }
    }
    
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    
    // free memory 
    for (int i = 0; i < rows; i++) {
        free(matrix[i]);
    }
    free(matrix);
    
    return 0;
}

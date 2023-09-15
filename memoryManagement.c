#include "matrix.h"

void memoryAllocate(int **matrix, int rows, int cols) {
    matrix = (int **)malloc(sizeof(int *) * rows);
    for (int i = 0; i < rows; i++) {
        matrix[i] = (int *)malloc(sizeof(int) * cols);
    }
}

void memoryFree(int **matrix, int rows) {
    for (int i = 0; i < rows; i++) {
        free(matrix[i]);
    }
    free(matrix);
}
#include "matrix.h"

int memoryAllocate(int **matrix, int rows, int cols) {
    matrix = (int **)malloc(sizeof(int *) * rows);
    if (matrix == NULL) {
        return -1;
    }
    for (int i = 0; i < rows; i++) {
        matrix[i] = (int *)malloc(sizeof(int) * cols);
        if (matrix[i] == NULL) {
            return -1;
        }
    }
    return 1;
}

void memoryFree(int **matrix, int rows) {
    for (int i = 0; i < rows; i++) {
        free(matrix[i]);
    }
    free(matrix);
}
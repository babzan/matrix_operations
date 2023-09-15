#include "../headers/matrix.h"

int **sub(int **matrix1, int **matrix2, int rows, int cols) {
    int **res;
    memoryAllocate(res, rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            res[i][j] = matrix1[i][j] - matrix2[i][j];
        }
    }
    return res;
}
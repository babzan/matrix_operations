#include "../headers/matrix.h"

int **transpose(int **matrix, int rows, int cols) {
    int **res;
    memoryAllocate(res, cols, rows);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            res[j][i] = matrix[i][j];
        }
    }
    return res;
}
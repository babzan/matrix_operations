#include "../headers/matrix.h"

int **mul(int **matrix1, int **matrix2, int rows1, int cols1, int rows2, int cols2){
    if (cols1 != rows2) {
        return -1;
    }
    int res[rows1][cols2];

    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            for (int k = 0; k < cols1; k++) {
                res[i][j] = matrix1[i][k] * matrix2[k][j];
            }
        }
    }
    return **res;
}
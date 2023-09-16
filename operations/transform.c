#include "../headers/matrix.h"

void rotateClockwise90(int **matrix, int rows, int cols);
void rotateCounterClockwise90(int **matrix, int rows, int cols);
void rotateClockwise180(int **matrix, int rows, int cols);
void rotateCounterClockwise180(int **matrix, int rows, int cols);
void printResult(int **matrix, int rows, int cols)

void transform(int **matrix, int rows, int cols) {
    int **result;
    memoryAllocate(result, rows, cols);
    result = transpose(matrix, rows, cols);
    rotateClockwise90(result, cols, rows);
}

void rotateClockwise90(int **matrix, int rows, int cols) {
    printf("Rotated matrix. 90 degree clockwise.");
    for (int i = 0; i < rows; i++) {
        for (int j = cols - 1; j > -1; j--) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

void rotateCounterClockwise90(int **matrix, int rows, int cols) {
    printf("Rotated matrix. 90 degree counter clockwise.");
    for (int i = rows - 1; i > -1; i--) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

void rotateClockwise180(int **matrix, int rows, int cols) {

}

void rotateCounterClockwise180(int **matrix, int rows, int cols) {

}

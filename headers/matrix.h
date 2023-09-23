#ifndef MATRIX_H
#define MATRIX_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int **sum(int **matrix1, int **matrix2, int rows, int cols);
int **sub(int **matrix1, int **matrix2, int rows, int cols);
int **mul(int **matrix1, int **matrix2, int rows1, int cols1, int rows2, int cols2);
int **transpose(int **matrix, int rows, int cols);
void transform(int **matrix, int rows, int cols);
void memoryFree(int **matrix, int rows);
int memoryAllocate(int **matrix, int rows, int cols);

void menu();


#endif
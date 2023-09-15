#ifndef MATRIX_H
#define MATRIX_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void sum(int **matrix1, int **matrix2);
void sub(int **matrix1, int **matrix2);
void mul(int **matrix1, int **matrix2);
void transpose(int **matrix);
void transform(int **matrix);
void memoryAllocate(int **matrix, int rows);
void memoryFree(int **matrix, int rows);


#endif
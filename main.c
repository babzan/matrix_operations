#include "./headers/matrix.h"

int main(int argc, char* argv[]){
    int **matrix1;
    int **matrix2;

    int rows, cols;
    char symbol;
    while (1) {
        menu();
        int operation = getOperation();
        if (operation == -1) {
            continue;
        } else {
            if (scanf("%d%d%c", &rows, &cols, &symbol) == 3 && (symbol == ' ' || symbol == '\n')) {

            } else {
                printf("Please, write correct number of ROWS and COLUMNS. For example: 2 2");
            }
        }
    }
}
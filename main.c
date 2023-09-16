#include "./headers/matrix.h"

int main(int argc, char* argv[]){
    int **matrix1;
    int **matrix2;

    int rows1, cols1;
    int rows2, cols2;
    char symbol;
    while (1) {
        menu();
        int operation = getOperation();
        if (operation == -1) {
            continue;
        } else {
            // if (operation == 4 || operation == 5) {
            //     if (scanf("%d%d%c", &rows1, &cols1, &symbol) == 3 && (symbol == ' ' || symbol == '\n')) {

            //     } else {
            //         printf("Please, write correct number of ROWS and COLUMNS. For example: 2 2");
            //     }
            // }
        }
    }
    return 0;
}
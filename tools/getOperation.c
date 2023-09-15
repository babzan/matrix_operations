#include "../headers/matrix.h"

int getOperation(){
    int operation;
    char symbol;
    if (scanf("%d%c", &operation, &symbol) == 2 && (symbol == ' ' || symbol == '\n')) {
        if (operation > 0 && operation < 6) {
            return operation;
        } else {
            return -1;
        }
    } else {
        printf("Please, print the correct number of operation.");
        return -1;
    }
}
// Configurações do mutirão. Não mexer.
#include "../macros_correcoes.h"
#define LABNUM "lab2-"
#define SOLUTIONFILE "tarefa7.c"

#include <stdio.h>

// TODO implemente seu programa aqui
void tree(int n){
    int i;
    int j;
    int h;

    //Loop for every line
    i = 0;
    while(i < n) {

        //Loop for spaces in the beginning
        j = n - i - 1;
        while(j > 0){
            printf(" ");
            j--;
        }

        h = i;
        // loop for /
        while(h > 0){
            printf("/");
            h--;
        }

        printf("|");

        //loop for /
        while(h < i){
            printf("\\");
            h++;
        }
        printf("\n");
        i++;
    }
}

int main() {
    tree(5);

    return 0;
}

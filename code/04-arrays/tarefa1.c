// Configurações do mutirão. Não mexer.
#include "../macros_correcoes.h"
#define LABNUM "lab4-"
#define SOLUTIONFILE "tarefa1.c"


#include <stdio.h>

int main(int argc, char *argv[]) {

    /* TODO: conserte o código abaixo */
	long vetor[5];
	int i;

	for(i = 0; i <= 5; i++) {
		printf("number \n");
		scanf("%ld", &vetor[i]);
	}
	
	for(i = 0; i <= 5; i++) {
		printf("i: %d, vetor[i]: %ld\n", i, vetor[i]);
	}

	return 0;
}

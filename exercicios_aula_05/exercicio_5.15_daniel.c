#include <stdio.h>

//Faça um programa que verifique se um número lido é divisível por 3 ou por 5, mas não pelos dois ao mesmo tempo. Imprima como resposta apenas as frases: “divisivel por 3”, “divisivel por 5”, “nao divisivel”, de acordo com a entrada recebida.

int main() {

	int number;
	
	//printf("Digite um valor inteiro: ");
	scanf("%d", &number);
	
	if (number % 3 == 0 && !(number % 3 == 0 && number % 5 == 0)) {
		printf("divisivel por 3\n");
	}
	else if (number % 5 == 0 && !(number % 3 == 0 && number % 5 == 0)) {
		printf("divisivel por 5\n");
	}
	else {
		printf("nao divisivel\n");
	}

	return 0;
}

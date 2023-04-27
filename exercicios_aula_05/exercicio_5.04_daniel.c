#include <stdio.h>

//Faça um programa que receba um número inteiro e informe se este número é par ou ímpar. Imprima apenas as palavras “par” ou “impar” em sua resposta.

int main() {

	int value;
	
	printf("Digite um valor inteiro: ");
	scanf("%d", &value);
	
	if (value % 2 == 0) {
		printf("par\n");
	} else {
		printf("impar\n");
	}

	return 0;
}

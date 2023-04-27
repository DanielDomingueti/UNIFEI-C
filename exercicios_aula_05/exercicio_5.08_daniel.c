#include <stdio.h>

//Faça um programa que leia um valor inteiro e informe se o valor lido é ou não é um múltiplo de 11. Seu programa deve imprimir apenas as respostas “sim” ou “nao”.

int main() {

	int value;
	
	printf("Digite um valor inteiro: ");
	scanf("%d", &value);
	
	if (value % 11 == 0) {
		printf("sim\n");
	} else {
		printf("nao\n");
	}

	return 0;
}

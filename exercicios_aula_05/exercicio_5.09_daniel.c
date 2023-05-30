#include <stdio.h>

//Faça um programa que determine se um determinado ano lido é bissexto. Um ano é bissexto se for divisível por 400, ou se for divisível por 4 e não for divisível por 100. Seu programa deve imprimir apenas as respostas “sim” ou “nao”.

int main() {
	
	int year;
	
	//printf("Digite o ano: ");
	scanf("%d", &year);
	
	if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) {
		printf("sim\n");
	} else {
		printf("nao\n");
	}

	return 0;	

}

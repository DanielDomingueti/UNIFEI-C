#include <stdio.h>

//Faça um programa que leia a idade e o tempo de serviço de um trabalhador e escreva se ele pode ou não se aposentar. As condições para aposentadoria são:
//• Ter pelo menos 65 anos,
//• Ou ter trabalhado pelo menos 30 anos,
//• Ou ter pelo menos 60 anos e trabalhado pelo menos 25 anos.
//Seu programa deve imprimir apenas as respostas “sim” ou “nao”.

int main() {

	int age;
	int workingTime;
	
	printf("Digite a idade: ");
	scanf("%d", &age);
	
	printf("Tempo de trabalho: ");
	scanf("%d", &workingTime);
	
	if (workingTime > age) {
		printf("Nao e possivel ter trabalhado mais que o tempo de vida\n");
		return 0;
	}
	
	if (age >= 65 || workingTime >= 30 || (age >= 60 && workingTime >= 25)) {
		printf("sim\n");
	} else {
		printf("nao\n");
	}

	return 0;
}

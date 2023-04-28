#include <stdio.h>

//Uma empresa aérea quer contratar novos comissários de vôo. Se a pessoa for homem, a altura mínima exigida é de 1,75m. No caso das mulheres, é necessário ter ao menos 1,80m de altura. Faça um programa que leia a altura (valor real) e o sexo (m ou f) de uma pessoa e informe se ela pode ou não ser contratada. Seu programa deve imprimir apenas as respostas “sim” ou “nao”.

int main() {

	float height = 0.0;
	char sex;
	
	printf("Digite a altura: ");
	scanf("%f", &height);
	
	printf("Digite o sexo (m ou f): ");
	scanf(" %c", &sex);

	if (((sex == 'm' || sex == 'M') && height >= 1.75)
		|| ((sex == 'f' || sex == 'F') && height >= 1.80)) {
		printf("sim\n");
	} else {
		printf("nao\n");
	}
	
	return 0;
}

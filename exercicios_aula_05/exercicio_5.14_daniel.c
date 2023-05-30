#include <stdio.h>

//Faça um programa que receba a altura (valor real) e o sexo (m ou f) de uma pessoa e calcule e mostre seu peso ideal, utilizando as seguintes fórmulas (onde h corresponde à altura):
// Homens: (72,7 * h) – 58
// Mulheres: (62,1 * h) – 44,7

int main() {

	float height;
	char sex;
	float weight;
	
	//printf("Digite a altura: ");
	scanf("%f", &height);
	
	//printf("Digite o sexo (m ou f): ");
	scanf(" %c", &sex);
	
	if (sex == 'm' || sex == 'M') {
		weight = (72.7 * height) - 58.0;
		printf("%f\n", weight);
	} 
	else if (sex == 'f' || sex == 'F') {
		weight = (62.1 * height) - 44.7;
		printf("%f\n", weight);
	}
	else {
		printf("Sexo indefinido\n");
	}

	return 0;
}

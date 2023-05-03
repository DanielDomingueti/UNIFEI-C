#include <stdio.h>
#include <math.h>

//Faça um programa que leia um número inteiro e mostre, como resposta, a soma de sua raiz cúbica com sua raiz quarta. Mostre o resultado usando duas casas decimais.

int main() {

	int value;
	
	float cubeRoot;
	float fourthRoot;
	float rootSum;
	
	float cubeRadiating = 1.0/3.0;
	float fourthRadiating = 1.0/4.0;
	
	//printf("Digite um número inteiro: ");
	scanf("%d", &value);
	
	cubeRoot = pow(value, cubeRadiating);
	fourthRoot = pow(value, fourthRadiating);
	
	rootSum = cubeRoot + fourthRoot;
	
	printf("%f", rootSum);

	return 0;
}

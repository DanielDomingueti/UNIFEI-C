#include <stdio.h>
#include <math.h>

//Faça um programa que receba dois números e mostre qual deles é o menor.

int main() {

	float firstNumber;
	float secondNumber;	
	float smaller;

	printf("Digite o primeiro número: ");
	scanf("%f", &firstNumber);
	
	printf("Digite o segundo número: ");
	scanf("%f", &secondNumber);

	smaller = firstNumber;
	
	if (secondNumber < smaller) {
		smaller = secondNumber;
	}
	
	if (firstNumber == secondNumber) {
		printf("Valores iguais!\n");
	}
	else {
		printf("Menor valor: %f\n", smaller);
	}
	
	
	return 0;
}

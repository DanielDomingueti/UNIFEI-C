#include <stdio.h>

//Faça um programa que receba quatro números e mostre qual deles é o menor.

int main() {

	float firstNumber;
	float secondNumber;
	float thirdNumber;
	float fourthNumber;	
	float smaller;

	printf("Digite o primeiro número: ");
	scanf("%f", &firstNumber);
	
	printf("Digite o segundo número: ");
	scanf("%f", &secondNumber);
	
	printf("Digite o terceiro número: ");
	scanf("%f", &thirdNumber);
	
	printf("Digite o quarto número: ");
	scanf("%f", &fourthNumber);

	smaller = firstNumber;
	
	if (secondNumber < smaller) {
		smaller = secondNumber;
	}
	
	if (thirdNumber < smaller) {
		smaller = thirdNumber;
	}
	
	if (fourthNumber < smaller) {
		smaller = fourthNumber;
	}
	
	
	if (firstNumber == secondNumber == thirdNumber == fourthNumber) {
		printf("Valores iguais!\n");
	} else {
		printf("Menor valor: %f\n", smaller);
	}
	
	return 0;
}

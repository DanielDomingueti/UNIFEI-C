#include <stdio.h>

//Faça um programa que receba quatro números e mostre qual deles é o menor.

int main() {

	int firstNumber;
	int secondNumber;
	int thirdNumber;
	int fourthNumber;	
	int smaller;

	//printf("Digite o primeiro número: ");
	scanf("%d", &firstNumber);
	
	//printf("Digite o segundo número: ");
	scanf("%d", &secondNumber);
	
	//printf("Digite o terceiro número: ");
	scanf("%d", &thirdNumber);
	
	//printf("Digite o quarto número: ");
	scanf("%d", &fourthNumber);

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
	
	printf("%d\n", smaller);
	
	return 0;
}

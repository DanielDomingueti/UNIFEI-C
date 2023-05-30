#include <stdio.h>
#include <math.h>

//Faça um programa que leia um valor inteiro e, caso este valor seja positivo, calcule e mostre a sua raiz quadrada. Caso ele seja negativo, calcule e mostre o seu quadrado.

int main() {

	int value;
	int result;
	float resultDecimal;
	
	//printf("Digite um valor inteiro: ");
	scanf("%d", &value);
	
	if (value >= 0) {
		resultDecimal = sqrt(1.0*value);
		printf("%f", resultDecimal);
	} else {
		result = value*value;
	    printf("%d", result);
	}

	return 0;
}

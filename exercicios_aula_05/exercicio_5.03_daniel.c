#include <stdio.h>
#include <math.h>

//Faça um programa que leia um valor inteiro e, caso este valor seja positivo, calcule e mostre a sua raiz quadrada. Caso ele seja negativo, calcule e mostre o seu quadrado.

int main() {

	int value;
	float result;
	
	printf("Digite um valor inteiro: ");
	scanf("%d", &value);
	
	if (value >= 0) {
		result = sqrt(value);
	} else {
		result = pow(value, 2);
	}

	printf("Resultado: %f\n", result);

	return 0;
}

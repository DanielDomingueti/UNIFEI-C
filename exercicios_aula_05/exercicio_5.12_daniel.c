#include <stdio.h>

//Faça um programa que leia as medidas dos 3 lados de um triângulo e mostre o tipo de triângulo: equilátero, isósceles ou escaleno. Imprima apenas o nome do triângulo, em letras minúsculas e sem acentos.

int main() {

	float firstSide;
	float secondSide;
	float thirdSide;
	
	//printf("Primeiro lado: ");
	scanf("%f", &firstSide);

	//printf("Segundo lado: ");
	scanf("%f", &secondSide);
	
	//printf("Terceiro lado: ");
	scanf("%f", &thirdSide);
	
	//isosceles
	if ((firstSide == secondSide && firstSide != thirdSide)
		|| (firstSide == thirdSide && firstSide != secondSide)
			|| (secondSide == thirdSide && secondSide != firstSide)) {
			
		printf("isosceles\n");
	}
	//equilatero
	else if ((firstSide == secondSide && firstSide == thirdSide)
		|| (firstSide == thirdSide && firstSide != secondSide)) {
		printf("equilatero\n");
	
	//escaleno
	} else if (firstSide != secondSide && firstSide != thirdSide) {
		printf("escaleno\n");
	}

	return 0;

}

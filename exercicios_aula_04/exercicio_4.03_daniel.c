#include <stdio.h>

//A bula de um remédio pediátrico recomenda a seguinte dosagem: 5 gotas para cada 2kg de peso da criança. Faça um programa que leia o peso da criança e mostre a quantidade de gotas a ser ministrada.

int main() {

	float childWeight;
	int adequateDropQuantity;
	
	const int dropQuantity = 5;
	const int weightRange = 2;

	printf("Digite o peso da criança: ");
	scanf("%f", &childWeight);
	
	adequateDropQuantity = (childWeight / weightRange) * dropQuantity;
	
	printf("Quantidade adequada de gotas: %d\n", adequateDropQuantity);

	return 0;
}

#include <stdio.h>

//Faça um programa que leia um valor dado em reais (R$) e a cotação do dólar (US$). A seguir, mostre o valor em reais convertido para dólares.

int main() {

	float realValue;
	float dolarPrice;
	
	float realToDolar;

	//printf("Digite um valor em reais: ");
	scanf("%f", &realValue);
	
	//printf("Digite a cotação do dólar: ");
	scanf("%f", &dolarPrice);
	
	realToDolar = realValue / dolarPrice;
	
	printf("%.2f", realToDolar);
	//printf("O valor em reais R$%.2f convertido para dólares a uma cotação de R$%.2f, resulta em: R$%.2f\n", realValue, dolarPrice, realToDolar);
	
	return 0;

}

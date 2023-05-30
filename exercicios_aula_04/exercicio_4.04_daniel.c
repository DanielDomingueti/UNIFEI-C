#include <stdio.h>

//Um grupo de amigos pretende alugar um carro por um certo número de dias. Consultadas duas agências, a primeira cobra R$ 62,00 pela diária e mais R$ 1,40 por km rodado. A segunda agência cobra diária de R$ 80,00 e mais R$ 1,20 por km rodado. Escreva um programa que leia a quantidade de km a serem percorridos e a quantidade de dias de aluguel do carro. A seguir, mostre, como resposta, uma única linha contendo o valor cobrado pela primeira agência separado do valor cobrado pela segunda agência por um único espaço.

int main() {

	float firstAgencyDailyPrice = 62.00;
	float firstAgencyPricePerKm = 1.40;
	
	float secondAgencyDailyPrice = 80.00;
	float secondAgencyPricePerKm = 1.20;

	float distanceKm;
	int rentDays;
	
	float firstAgencyFinalPrice;
	float secondAgencyFinalPrice;
	
	//printf("Digite a quantidade de km a serem percorridos: ");
	scanf("%f", &distanceKm);
	
	//printf("Digite a quantidade de dias do aluguel: ");
	scanf("%d", &rentDays);
	
	firstAgencyFinalPrice = (firstAgencyDailyPrice * rentDays) + (firstAgencyPricePerKm * distanceKm);
	
	secondAgencyFinalPrice = (secondAgencyDailyPrice * rentDays) + (secondAgencyPricePerKm * distanceKm);
	
	printf("%.2f %.2f", firstAgencyFinalPrice, secondAgencyFinalPrice);
	
	return 0;
}

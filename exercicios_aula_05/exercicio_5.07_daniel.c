#include <stdio.h>

//Cada estado da região sudeste possui uma taxa de imposto distinta sobre o valor dos produtos nele comercializados. Faça um programa que leia o preço de um produto e o estado (use 1 = MG; 2 = SP; 3 = RJ; e 4 = ES), e mostre o preço final acrescido do imposto, de acordo com as seguintes taxas: MG = 12%; SP = 7%; RJ = 15%; ES = 8%.

int main() {

	float productPrice;
	float finalPrice;
	int state;
	
	const int MG = 1;
	const int SP = 2;
	const int RJ = 3;
	const int ES = 4;
	
	//printf("Digite o valor do produto: ");
	scanf("%f", &productPrice);

	//printf("Digite o ID do estado (1 = MG; 2 = SP; 3 = RJ; e 4 = ES): ");
	scanf("%d", &state);

	if (state == MG) {
		finalPrice = productPrice + productPrice * (12.0/100.0);
	} 
	else if (state == SP) {
		finalPrice = productPrice + productPrice * (7.0/100.0);
	}
	else if (state == RJ) {
		finalPrice = productPrice + productPrice * (15.0/100.0);
	} 
	else if (state == ES) {
		finalPrice = productPrice + productPrice * (8.0/100.0);
	}
	
	printf("%.2f\n", finalPrice);
	
	return 0;
}

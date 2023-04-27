#include <stdio.h>

//Faça um programa para calcular o valor de desconto de um produto pago à vista. O programa deve ler o valor do produto e a porcentagem de desconto à vista (valor inteiro). Imprima, como resposta, uma única linha contendo o valor final do produto e o valor do desconto, separados entre si por um único espaço.

int main() {

	float initialPrice;
	float finalPrice;
	int discountPercentage;
	
	printf("Digite o valor do produto: ");
	scanf("%f", &initialPrice);
	
	printf("Digite o valor da porcentagem (número inteiro): ");
	scanf("%d", &discountPercentage);
	
	finalPrice = initialPrice - (initialPrice * discountPercentage / 100);
	
	printf("%.2f %d", finalPrice, discountPercentage);
	
	return 0;

}

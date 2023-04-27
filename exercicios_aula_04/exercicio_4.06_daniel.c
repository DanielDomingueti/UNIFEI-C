#include <stdio.h>
#include <math.h>

//Uma das fórmulas alternativas para se calcular a área de um triângulo é a Fórmula de Herão, que dá o valor da área em função da medida dos três lados do triângulo. A fórmula é dada por 𝐴 = √𝑝(𝑝 − 𝑎)(𝑝 − 𝑏)(𝑝 − 𝑐), onde a, b e c são as medidas dos lados e p é o semiperímetro (metade do perímetro). Faça um programa que leia as medidas dos lados do triângulo e mostre o valor de sua área, com uma única casa decimal.

int main() {

	float firstSide;
	float secondSide;
	float thirdSide;
	
	float p;
	float area;
	
	printf("Digite o primeiro valor do lado do triângulo: ");
	scanf("%f", &firstSide);
	
	printf("Digite o segundo valor do lado do triângulo: ");
	scanf("%f", &secondSide);
	
	printf("Digite o terceiro valor do lado do triângulo: ");
	scanf("%f", &thirdSide);
	
	p = (firstSide + secondSide + thirdSide) / 2;
	
	area = sqrt(p * (p-firstSide) * (p-secondSide) * (p-thirdSide));
	
	printf("Área final: %.1f", area);

	return 0;
}

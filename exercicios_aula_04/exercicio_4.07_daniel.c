#include <stdio.h>
#include <math.h>

//Faça um programa que leia o valor de ângulo, dado em graus, e mostre, com duas casas decimais, os valores de seno, cosseno e tangente do ângulo lido, em uma única linha, separados por um único espaço

int main() {

	float angleDegrees;
	float angleRadiant;
	
	float sine;
	float cosine;
	float tangent;
	
	printf("Digite o valor do ângulo em graus: ");
	scanf("%f", &angleDegrees);
	
	angleRadiant = angleDegrees * acos(-1) / 180;

	sine = sin(angleRadiant);
	cosine = cos(angleRadiant);
	tangent = tan(angleRadiant);

    	printf("%.2f %.2f %.2f\n", sine, cosine, tangent);

	return 0;
}

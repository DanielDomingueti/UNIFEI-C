#include <stdio.h>
#include <math.h>

//O volume de um cilindro é dado pela seguinte fórmula: V = π(r^2)h, onde r é o valor raio, h é a sua altura e π é uma constante matemática. Faça um programa que leia os valores de r e h e calcule o volume do cilindro correspondente, com duas casas decimais. Represente π com todas as suas casas decimais.

int main() {

	float radius;
	float height;
	float volume;
	
	printf("Digite o valor do raio: ");
	scanf("%f", &radius);
	
	printf("Digite o valor da altura: ");
	scanf("%f", &height);
	
	volume = M_PI * pow(radius, 2) * height;
	
	printf("O volume do cilindro é %.2f\n", volume);

	return 0;
}

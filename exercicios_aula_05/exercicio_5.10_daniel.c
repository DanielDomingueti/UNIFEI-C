#include <stdio.h>
#include <math.h>

//Faça um programa que resolva uma equação de segundo grau, na forma: ax2 + bx + c = 0. Caso a equação possua duas raízes, imprima-as em uma mesma linha, sendo a raiz de menor valor impressa primeiro e separada da maior raiz por um único espaço. Se a equação possuir apenas uma raiz, imprima somente este valor. Caso a equação não possua raízes reais, imprima a mensagem “sem raizes reais”.

int main() {

	float a;
	float b;
	float c;
	
	float delta;
	float x1;
	float x2;
	
	printf("Digite A: ");
	scanf("%f", &a);

	printf("Digite B: ");
	scanf("%f", &b);
	
	printf("Digite C: ");
	scanf("%f", &c);

	delta = pow(b, 2) - (4 * a * c);
	
	//possui 2 raizes pois delta é positivo
	if (delta > 0) {
		x1 = (-b + sqrt(delta)) / (2.0 * a); 
		x2 = (-b - sqrt(delta)) / (2.0 * a);
		
		printf("%f, %f\n", x1, x2);
		return 0;
		
	//possui 1 raiz pois delta == 0
	} else if (delta == 0) {
		x1 = -b / (2.0 * a);
	
		printf("%f\n", x1);
		return 0;	
		
	//nao possui raiz real
	} else {
	
		printf("Delta negativo, sem raiz real\n");
		return 0;
	
	}

}

#include <stdio.h>

//Faça um programa que leia duas notas de um aluno e verifique se estas notas são válidas. Uma nota é válida se ela está no intervalo de 0 a 10. Caso as notas sejam válidas, mostre a média entre elas. Caso não sejam válidas, mostre a mensagem “notas incorretas”.

int main() {

	float firstGrade;
	float secondGrade;
	float average;
	
	//printf("Digite a primeira nota: ");
	scanf("%f", &firstGrade);
	
	//printf("Digite a segunda nota: ");
	scanf("%f", &secondGrade);
	
	if (firstGrade < 0 || firstGrade > 10 || secondGrade < 0 || secondGrade > 10) {
		printf("notas incorretas\n");
	} else {
		average = (firstGrade + secondGrade) / 2;
		printf("%f\n", average);
	}

	return 0;
}

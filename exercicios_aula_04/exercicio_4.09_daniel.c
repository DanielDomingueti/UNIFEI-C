#include <stdio.h>

//Um aluno deseja saber qual a porcentagem de faltas que ele tem em uma disciplina. Faça um programa que leia a carga horária total da disciplina e a quantidade de horas de faltas acumuladas, e mostre a porcentagem de faltas do aluno (entre 0 a 100).

int main() {

	int totalHours;
	int totalAbsences;
	float percentage;
	
	//printf("Digite a carga horária total da disciplina (valor inteiro): ");
	scanf("%d", &totalHours);

	//printf("Digite a quantidade de horas de faltas acumuladas (valor inteiro): ");
	scanf("%d", &totalAbsences);
	
	percentage = (1.0 * totalAbsences) / (1.0 * totalHours) * 100;
	
	printf("%f", percentage);
	
	return 0;
}

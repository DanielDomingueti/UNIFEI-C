#include <stdio.h>

//Faça um programa que leia a idade de um nadador e mostre em qual categoria ele é classificado, de acordo com a tabela a seguir.
//Fraldinha = 4 a 5 anos
//Infantil = 6 a 12 anos
//Juvenil = 13 a 18 anos
//Adulto = Mais de 18 anos 

int main() {

	int age;
	
	printf("Digite a idade: ");
	scanf("%d", &age);
	
	if (age >= 4.0 && age <= 5.0) {
		printf("Fraldinha\n");
	}
	else if(age >= 6.0 && age <= 12.0) {
		printf("Infantil\n");
	}
	else if(age >= 13.0 && age <= 18.0) {
		printf("Juvenil\n");
	}
	else if (age < 4.0) {
		printf("Categoria indefinida\n");
	}
	else {
		printf("Adulto\n");
	}

	return 0;
}

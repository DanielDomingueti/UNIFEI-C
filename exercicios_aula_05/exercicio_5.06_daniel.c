#include <stdio.h>

//Faça um programa que leia o salário de um trabalhador e o valor da prestação de um empréstimo. Se a prestação for maior que 20% de seu salário, mostre a mensagem: “emprestimo nao concedido”. Caso contrário, mostre a mensagem: “emprestimo concedido”.

int main() {

	float income;
	float loan;
	
	//printf("Digite o valor do salário: ");
	scanf("%f", &income);
	
	//printf("Digite o valor da prestação do empréstimo: ");
	scanf("%f", &loan);

	if ((1.0 * loan) / (1.0 * income) > 0.2) {
		printf("emprestimo nao concedido\n");
	} else {
		printf("emprestimo concedido\n");
	}

	return 0;
}

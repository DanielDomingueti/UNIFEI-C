#include <stdio.h>

    //Faça uma função que receba uma data e exiba-a na tela no formato textual por extenso. Exemplo: para
    //01/01/2000, imprimir: 1 de janeiro de 2000. Seu scanf deve ler a data no formato dd/mm/aaaa. No Moodle,
    //insira seu programa completo (main + funções).
    
void exibirDataPorExtenso(int dia, int mes, int ano);

void exibirDataPorExtenso(int dia, int mes, int ano) {
    char* meses[12] = {"janeiro", "fevereiro", "março", "abril", "maio", "junho",
                       "julho", "agosto", "setembro", "outubro", "novembro", "dezembro"};

    printf("%d de %s de %d\n", dia, meses[mes - 1], ano);
}

int main() {
    int dia, mes, ano;

    scanf("%d/%d/%d", &dia, &mes, &ano);

    exibirDataPorExtenso(dia, mes, ano);

    return 0;
}
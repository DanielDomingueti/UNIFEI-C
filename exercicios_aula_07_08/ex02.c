#include <stdio.h>
#define SIZE 10

//Faça um programa que declare e leia um vetor com 10 números reais. 
//Calcule e armazene em um segundo vetor o quadrado de cada número real lido. Mostre os dois vetores na tela.
//Imprima cada vetor em uma linha, com os números separados entre si por um único espaço.

int main() {

    int i;
    double vet[SIZE];
    double secVet[SIZE];

    for (i = 0; i < SIZE; i++) {
        scanf("%lf", &vet[i]);
        secVet[i] = vet[i] * vet[i];
    }

    for (i = 0; i < SIZE; i++) {
        printf("%0.lf ", vet[i]);
    }

    printf("\n");

    for (i = 0; i < SIZE; i++) {
        printf("%0.lf ", secVet[i]);
    }

    return 0;
}
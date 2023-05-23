#include <stdio.h>
#define SIZE 8

    //Faça um programa que declare e leia um vetor com 8 posições. 
    //A seguir, leia dois valores X e Y que corresponderão a duas posições do vetor.
    //Ao final, mostre a soma dos elementos presentes nas posições X e Y. 
    //Seu programa não deve permitir que o usuário informe valores inválidos para X e Y.

int main() {

    int vet[SIZE], i, x, y, sum;

    for (i = 0; i < SIZE; i++) {
        scanf("%d", &vet[i]);
    }

    do {
        scanf("%d", &x);
        scanf("%d", &y);
    } while (x < 0 || y < 0);

    sum = vet[x] + vet[y];
    printf("%d", sum);

    return 0;
}
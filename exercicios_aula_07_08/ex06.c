#include <stdio.h>
#define SIZE 10

    //Faça um programa que leia um vetor de inteiros de 10 posições. 
    //A seguir, leia um valor X e mostre na tela os elementos presentes no vetor que são múltiplos de X. 
    //Imprima os números em uma única linha, separados entre si por um único espaço.

int main() {

    int vet[SIZE], x, i;

    for (i = 0; i < SIZE; i++) {
        scanf("%d", &vet[i]);
    }

    scanf("%d", &x);

    for (i = 0; i < SIZE; i++) {
        if (vet[i] % x == 0) {
            printf("%d ", vet[i]);
        }
    }
    
    return 0;
}
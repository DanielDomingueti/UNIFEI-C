#include <stdio.h>
#define SIZE 8

    //Faça um programa que leia um vetor de inteiros de 8 posições.
    //A seguir, imprima, em uma única linha, os números primos que estão presentes no vetor.
    //Separe os números da resposta por um único espaço.

int main() {

    int vet[SIZE], i, j;

    for (i = 0; i < SIZE; i++) {
        scanf("%d", &vet[i]);
    }

    for (i = 0; i < SIZE; i++) { 
        if (vet[i] >= 2) {
            for (j = 2; j < vet[i]; j++) {
                if (vet[i] % j != 0) {
                    printf("%d ", vet[i]);
                }
            }
        }

    }

    return 0;
}
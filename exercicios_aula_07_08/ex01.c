#include <stdio.h>
#define SIZE 8

//Faça um programa que leia um vetor de char com 8 posições e, a seguir, mostre os valores lidos em ordem inversa.

int main() {

    int i;
    char vet[SIZE];

    for (i = 0; i < SIZE; i++) {
        scanf(" %c", &vet[i]);
    }

    for (i = SIZE-1; i >= 0; i--) {
        printf("%c ", vet[i]);
    }

    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

// Declare um vetor de inteiros com 10 posições, leia e armazene valores em cada posição. A seguir,
// utilizando um ponteiro de int, mostre o endereço e o conteúdo de cada posição do vetor.

int main() {

    int i, input;
    int* arr = NULL;
    arr = (int*) malloc(SIZE * sizeof(int));

    if (!arr) {
        exit(1);
    }

    int* initialArr = arr;

    for (i = 0; i < SIZE; i++) {
        scanf(" %d", &input);
        *initialArr = input;
        initialArr++;
    }

    initialArr = arr;
    for (i = 0; i < SIZE; i++) {
        printf("Conteudo: %d, endereco posicao: %p\n", *initialArr, initialArr);
        initialArr++;
    }

    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

// Declare um vetor de inteiros com 10 posições, leia e armazene valores em cada posição. A seguir,
// utilizando um ponteiro de int, some uma unidade a cada posição do vetor. Imprima o vetor antes e após a
// modificação.


int main() {

    int i, input;
    int* arr = NULL;
    int* newArr = NULL;
    arr = (int*) malloc(SIZE * sizeof(int));
    newArr = (int*) malloc(SIZE * sizeof(int));

    if (!arr || !newArr) exit(1);

    int* initialArr = arr;
    for (i = 0; i < SIZE; i++) {
        scanf(" %d", &input);
        *initialArr = input;
        initialArr++;
    }

    int* initialNewArr = newArr;
    initialArr = arr;
    for (i = 0; i < SIZE; i++) {

        *initialNewArr = *initialArr + 1;

        initialArr++;
        initialNewArr++;
    }

    printf("Valores iniciais\n");
    for (i = 0; i < SIZE; i++) {
        printf("%d ", arr[i]);
    }

    printf("\nValores modificados\n");
    for (i = 0; i < SIZE; i++) {
        printf("%d ", newArr[i]);
    }

    return 0;
}
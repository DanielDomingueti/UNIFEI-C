#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

int main() {

//     Declare um vetor de inteiros com 10 posições, leia e armazene valores em cada posição. A seguir,
// utilizando apenas ponteiros de int troque o segundo maior elemento de posição com o segundo menor
// elemento.

    int i, largestIndex, smallestIndex;
    int* arr = NULL;

    arr = (int*) malloc(SIZE * sizeof(int));
    if (!arr) exit(1);

    for (i = 0; i < SIZE; i++) {
        printf("Digite o valor index %d: ", i);
        scanf("%d", &arr[i]);
    }

    printf("Valores de origem: ");
    for (i = 0; i < SIZE; i++) {
        printf("%d ", arr[i]);
    }

    int* largestValue = arr;
    int* smallestValue = arr;


    for (i = 1; i < SIZE; i++) {
        if (arr[i] > *largestValue) largestValue = &arr[i];
         if (arr[i] < *smallestValue) smallestValue = &arr[i];
    }

    int smallestValueReference = *smallestValue;

    *smallestValue = *largestValue;
    *largestValue = smallestValueReference;

    printf("\nValores modificados: ");
    for (i = 0; i < SIZE; i++) {
        printf("%d ", arr[i]);
    }
    
    free(arr);
    free(largestValue);
    free(smallestValue);

    return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main() {

//     Declare um vetor de inteiros com 10 posições, leia e armazene valores em cada posição. A seguir,
// utilizando apenas ponteiros de int, some uma unidade ao conteúdo de cada posição do vetor se o conteúdo
// for par; multiplique por 2 se for ímpar.
    
    int i;
    int* arr = NULL;

    arr = (int*) malloc(10 * sizeof(int));
    if (!arr) exit(1);

    for (i = 0; i < 10; i++) {
        scanf(" %d", &arr[i]);
    }

    printf("\nVetor inicial: ");
    for (i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }

    int* initialArr = arr;
    for (i = 0; i < 10; i++) {
        if (*initialArr % 2 == 0) {
            *initialArr += 1;
        } else {
            *initialArr *= 2;
        }
        initialArr++;
    }

    printf("\nVetor final: ");
    for (i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }

    free(arr);
    free(initialArr);

    return 0;
}
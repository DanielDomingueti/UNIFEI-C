// Faça uma função que receba um array de inteiros, seu tamanho (N) e duas variáveis inteiras. Armazene
// nessas variáveis o valor mínimo e máximo do array. O main deve ler N, ler o vetor, chamar a função e
// imprimir o menor valor separado do maior por um único espaço. Use apenas aritmética de ponteiros, isto é,
// faça este programa sem usar colchetes. No Moodle, insira seu programa completo (main + funções).

#include <stdio.h>
#include <stdlib.h>

void findSmallestValue(int* arr, int size, int* min, int* max);

void findSmallestValue(int* arr, int size, int* min, int* max) {
    int i;
    int* initialValueArr = arr;
    int minValue = initialValueArr[0];
    int maxValue = initialValueArr[0];

    for (i = 1; i < size; i++) {
        initialValueArr++;
        if (*initialValueArr > maxValue) {
            maxValue = *initialValueArr;
        }
        if (*initialValueArr < minValue) {
            minValue = *initialValueArr;
        }
    }
    *min = minValue;
    *max = maxValue;
}

int main() {

    int i, size, input;
    int* arr = NULL;
    int* min = NULL;
    int* max = NULL;

    scanf(" %d", &size);

    arr = (int*) malloc(size * sizeof(int));
    min = (int*) malloc(sizeof(int));
    max = (int*) malloc(sizeof(int));

    if (!arr || !min || !max) {
        printf("falha na alocacao\n");
        exit(1);
    }

    for (i = 0; i < size; i++) {
        scanf(" %d", &input);
        arr[i] = input;
    }

    findSmallestValue(arr, size, min, max);

    printf("%d %d", *min, *max);
  
    free(arr);
    free(min);
    free(max);

    return 0;
}
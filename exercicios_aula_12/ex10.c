#include <stdio.h>
#include <stdlib.h>

    //Faça uma função que receba um vetor de inteiros e o seu tamanho, e devolva o valor do maior elemento
    //presente no vetor. No Moodle, insira apenas a sua função, que deve ter a seguinte assinatura:
    //int maxvet(int *vet, int n)

int maxvet(int *vet, int n);

int maxvet(int *vet, int n) {
    int i;

    int max = 0;
    for (i = 1; i < n; i++) {
        if (vet[i] > vet[max]) {
            max = i;
        }
    }

    return vet[max];
}

int main() {

    int size, i;
    int *vetor = NULL;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &size);
    vetor = (int *) malloc(size * sizeof(int));

    if (!vetor) {
        printf("Memoria insuficiente...");
        exit(1);
    }

    for (i = 0; i < size; i++) {
        printf("Digite o valor da posicao %d do vetor: ", i+1);
        scanf("%d", &vetor[i]);
    }

    int maxValue = maxvet(vetor, size);
    printf("Maior valor do vetor: %d\n", maxValue);

    return 0;
}
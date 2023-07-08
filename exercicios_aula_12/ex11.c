#include <stdio.h>
#include <stdlib.h>

    //Faça uma função que receba um vetor de inteiros e o seu tamanho, e devolva a média dos seus elementos.
    //No Moodle, insira apenas a sua função, que deve ter a seguinte assinatura:
    //double avgvet(int *vet, int n)


double avgvet(int *vet, int n);

double avgvet(int *vet, int n) {
    int i;
    int sum = 0.0;

    for (i = 0; i < n; i++) {
        sum += vet[i];
    }

    const double average = sum * 1.0/n * 1.0;

    return average;
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

    const double average = avgvet(vetor, size);

    free(vetor);

    printf("Media dos valores do vetor: %.2lf\n", average);

    return 0;
}
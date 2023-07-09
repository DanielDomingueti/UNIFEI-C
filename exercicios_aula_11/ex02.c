#include <stdio.h>
#include <stdlib.h>

// Escreva um programa que contenha duas variáveis inteiras. Leia essas variáveis, compare seus endereços
// e exiba o conteúdo do maior endereço.

int main() {

    int a, b;

    int* addressA = NULL;
    int* addressB = NULL;

    addressA = (int*) malloc(1 * sizeof(int));
    addressB = (int*) malloc(1 * sizeof(int));

    if (!addressA || !addressB) {
        exit(1);
    }

    scanf(" %d %d", &a, &b);

    addressA = &a;
    addressB = &b;

    printf("valores dos enderecos: a: %d,  b: %d\n", addressA, addressB);

    if (addressA > addressB) {
        printf("%d\n", *addressA);
    } else {
        printf("%d\n", *addressB);
    }

    free(addressA);
    free(addressB);

    return 0;
}
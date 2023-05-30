#include <stdio.h>
#define SIZE 10

    //Faça um programa que leia um vetor de inteiros de 10 posições.
    //A seguir, mostre quais são o maior e o menor elementos presentes no vetor.
    //Na linha seguinte, imprima suas respectivas posições dentro do vetor. 
    //Separe os valores da resposta por um único espaço.

int main() {

    int vet[SIZE], i, smallest, smallestIndex, largest, largestIndex;

    for (i = 0; i < SIZE; i++) {
        scanf("%d", &vet[i]);
    }

    smallest = vet[0];
    smallestIndex = 0;
    largest = vet[0];
    largestIndex = 0;

    for (i = 1; i < SIZE; i++) {
        if (vet[i] < smallest) {
            smallest = vet[i];
            smallestIndex = i; 
        }
        if (vet[i] > largest) {
            largest = vet[i];
            largestIndex = i;
        }
    }        

    printf("%d %d\n", largest, smallest);
    printf("%d %d\n", largestIndex, smallestIndex);

    return 0;
}
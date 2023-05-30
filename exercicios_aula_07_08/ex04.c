#include <stdio.h>
#define SIZE 12

    //Faça um programa que leia um vetor de inteiros de 12 posições. 
    //A seguir, mostre quantos números pares e quantos números ímpares estão presentes no vetor. 
    //Imprima as respostas em uma única linha, separadas entre si por um único espaço.

int main() {

    int vet[SIZE], even = 0, odd = 0, i;

    for (i = 0; i < SIZE; i++) {
        scanf("%d", &vet[i]);
        if (vet[i] % 2 == 0) {
            even++;
        } else {
            odd++;
        }
    }

    printf("%d %d", even, odd);

    return 0;
}
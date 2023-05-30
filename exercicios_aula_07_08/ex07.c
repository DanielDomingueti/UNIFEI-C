#include <stdio.h>
#define SIZE 15

    //Um jogo de loteria é composto por números entre 1 a 25, sendo que o apostador escolhe 15 valores.
    //Faça um programa que leia e armazene em um vetor os 15 valores representando o palpite do apostador
    //e leia em um segundo vetor quais foram os 15 números sorteados. A seguir, mostre o total de acertos do apostador.

int main() {

    int vet[SIZE], vetGift[SIZE], i, j, counter;

    for (i = 0; i < SIZE; i++) {
        scanf("%d", &vet[i]);
    }

    for (i = 0; i < SIZE; i++) {
        scanf("%d", &vetGift[i]);
    }

    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            if (vet[i] == vetGift[j]) {
                counter++;
            }
        }
    }

    printf("%d", counter);
    
    return 0;
}
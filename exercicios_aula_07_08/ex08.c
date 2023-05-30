#include <stdio.h>
#define SIZE 8

    //Faça um programa que leia dois vetores X e Y de inteiros com 8 elementos cada um.
    //Calcule e mostre os vetores resultantes para cada caso a seguir:
    //a) Soma entre X e Y: soma de cada elemento de X com o elemento da mesma posição em Y.
    //b) Produto entre X e Y: multiplicação de cada elemento de X com o elemento da mesma posição em Y.
    //c) Interseção de conjuntos entre X e Y: apenas os elementos que aparecem nos dois vetores.
    //d) Diferença de conjuntos entre X e Y: todos os elementos de X que não existem em Y.
    //Imprima cada item em uma linha, sendo os valores separados entre si por um único espaço.

int main() {

    int firstVet[SIZE], secondVet[SIZE], i, j, sumVet[SIZE], prodVet[SIZE], intersecVec[SIZE], intersecCounter = 0, diffVet[SIZE], diffCounter = 0;

    for (i = 0; i < SIZE; i++) {
        scanf("%d", &firstVet[i]);
    }

    for (i = 0; i < SIZE; i++) {
        scanf("%d", &secondVet[i]);
    }

    for (i = 0; i < SIZE; i++) {
        sumVet[i] = firstVet[i] + secondVet[i];
        prodVet[i] = firstVet[i] * secondVet[i];
    }

    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            if (firstVet[i] == secondVet[j]) {
                intersecVec[intersecCounter] = firstVet[i];
                intersecCounter++;
                break;
            }
        }
    }

    for (i = 0; i < SIZE; i++) {
        int pointer = 0;
        for (j = 0; j < SIZE; j++) {
            if (firstVet[i] == secondVet[j]) {
                pointer = 1;
                break;
            }
        }
        if (!pointer) {
            diffVet[diffCounter] = firstVet[i];
            diffCounter++;
        }
    }    
        
    for (i = 0; i < SIZE; i++) {
        printf("%d ", sumVet[i]);
    }
    printf("\n");

    for (i = 0; i < SIZE; i++) {
        printf("%d ", prodVet[i]);
    }
    printf("\n");

    for (i = 0; i < intersecCounter; i++) {
        printf("%d ", intersecVec[i]);
    }
    printf("\n");

    for (i = 0; i < diffCounter; i++) {
        printf("%d ", diffVet[i]);
    }


    return 0;
}
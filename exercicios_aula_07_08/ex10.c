#include <stdio.h>
#define SIZE 4

    //Faça um programa que leia uma matriz 4x4.
    //A seguir, mostre como resposta quantos valores maiores que 10 estão presentes na matriz.

int main() {

    int mat[SIZE][SIZE], i, j, counter = 0;

    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            scanf("%d", &mat[i][j]);
            if (mat[i][j] > 10) {
                counter++;
            }
        }
    }

    printf("%d", counter);
    
    return 0;
}
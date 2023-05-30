#include <stdio.h>
#define SIZE 4

    //Faça um programa que leia uma matriz 4x4. 
    //A seguir, mostre como resposta quantos valores pares e quantos valores ímpares estão presentes na matriz. 
    //Imprima os valores da resposta em uma única linha, separados por um único espaço.

int main() {

    int mat[SIZE][SIZE], i, j, even = 0, odd = 0;

    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            scanf("%d", &mat[i][j]);
            if (mat[i][j] % 2 == 0) {
                even++;
            } else {
                odd++;
            }
        }
    }

    printf("%d %d", even, odd);
    
    return 0;
}
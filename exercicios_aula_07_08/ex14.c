#include <stdio.h>
#define SIZE 3

    //Faça um programa que leia uma matriz 3x3. Essa matriz será preenchida apenas com elementos 0 e 1 (não é necessário verificar; os casos de testes não irão "trapacear" a entrada),
    //representando um "jogo da velha". Imprima como resposta apenas um "sim" ou "nao", informando se as marcações de "1" venceram a partida.

int main() {

    int mat[SIZE][SIZE], i, j, flag = 0;

    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    for (i = 0; i < SIZE; i++) {
        if (mat[i][0] == 1 && mat[i][1] == 1 && mat[i][2] == 1) {
            flag = 1;
            break;
        }
        else if (mat[0][i] == 1 && mat[1][i] == 1 && mat[2][i] == 1) {
            flag = 1;
            break;
        } else if ((mat[0][0] == 1 && mat[1][1] == 1 && mat[2][2] == 1) || (mat[0][2] == 1 && mat[1][1] == 1 && mat[2][0] == 1)) {
            flag = 1;
            break;
        }
    }

    if (flag == 1) {
        printf("sim");
    } else {
        printf("nao");
    }
    
    return 0;
}
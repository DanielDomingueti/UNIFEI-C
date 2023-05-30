#include <stdio.h>

    //Faça um programa que leia uma matriz MxN, onde o usuário informa os valores de M e N.
    //Mostre como resposta o valor do maior elemento presente na matriz, a linha e a coluna em que ele se encontra.

int main() {

    int m, n;

    do {
        scanf("%d", &m);
        scanf("%d", &n);
    } while (m <= 0 || n <= 0);

    int mat[m][n], i, j, largest, line = 0, column = 0;

    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    largest = mat[0][0];
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            if (mat[i][j] > largest) {
                largest = mat[i][j];
                line = i;
                column = j;
            }
        }
    }
    
    printf("%d %d %d", largest, line, column);
    
    return 0;
}
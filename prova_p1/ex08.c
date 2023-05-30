#include <stdio.h>

int main() {

    // Escreva, em linguagem C pura, um programa que leia uma matriz de inteiros de ordem MxN, onde o usuário informa os valores de M e N.
    // A seguir, leia um vetor de inteiros de P posições, onde o usuário informa o valor de P.
    // Mostre, como resposta, uma única linha contendo os elementos ímpares da matriz que também estão presentes no vetor. Separe os elementos por um único espaço.

    int m, n, p;
    int i, j, x;

    scanf("%d", &m);
    scanf("%d", &n);
    int mat[m][n];
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    scanf("%d", &p);
    int vet[p];
    for (i = 0; i < p; i++) {
        scanf("%d", &vet[i]);
    }

    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            if (mat[i][j] % 2 != 0) { // Verifica se o elemento é ímpar
                for (x = 0; x < p; x++) {
                    if (mat[i][j] == vet[x]) { // Verifica se o elemento está presente no vetor
                        printf("%d ", mat[i][j]);
                        break;
                    }
                }
            }
        }
    }

    return 0;
}

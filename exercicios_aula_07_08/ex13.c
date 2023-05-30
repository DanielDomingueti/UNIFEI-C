#include <stdio.h>
#include <limits.h>

    //Faça um programa que leia uma matriz MxN, onde o usuário informa os valores de M e N. 
    //Mostre como resposta o valor do segundo maior elemento presente na matriz, a linha e a coluna em que ele se encontra.

int main() {

    int m, n;

    do {
        scanf("%d", &m);
        scanf("%d", &n);
    } while (m <= 0 || n <= 0);

    int mat[m][n], i, j, largest, secondLargest, sLine = 0, sColumn = 0;

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
                
            }
        }
    }

    secondLargest = INT_MIN;
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            if (mat[i][j] > secondLargest && mat[i][j] < largest) {
                secondLargest = mat[i][j];
                sLine = i;
                sColumn = j;
            }
        }
    }
    
    printf("%d %d %d", secondLargest, sLine, sColumn);
    
    return 0;
}
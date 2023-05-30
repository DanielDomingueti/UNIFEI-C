#include <stdio.h>

int main() {
    int n, i, j, flag = 0;
    int lineSum = 0, diagSum1 = 0, diagSum2 = 0;

    do {
        scanf("%d", &n);
    } while (n <= 0);

    int mat[n][n];

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    for (j = 0; j < n; j++) {
        lineSum += mat[0][j];
    }

    for (i = 0; i < n; i++) {
        int currLineSum = 0;

        for (j = 0; j < n; j++) {
            currLineSum += mat[i][j];
        }

        if (currLineSum != lineSum) {
            flag = 1;
            break;
        }

        diagSum1 += mat[i][i];
        diagSum2 += mat[i][n - i - 1];
    }

    if (diagSum1 != lineSum || diagSum2 != lineSum) {
        flag = 1;
    }

    if (flag) {
        printf("nao\n");
    } else {
        printf("sim\n");
    }

    return 0;
}

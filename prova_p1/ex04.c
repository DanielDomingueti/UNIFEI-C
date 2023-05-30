#include <stdio.h>

int main() {

    int line1, column1, line2, column2, i, j;

    scanf("%d", &line1);
    scanf("%d", &column1);
    int vet1[line1][column1];

    for (i = 0; i < line1; i++) {
        for (j = 0; j < column1; j++) {
            scanf("%d", &vet1[i][j]);
        }
    }

    scanf("%d", &line2);
    scanf("%d", &column2);
    int vet2[line2][column2];

    for (i = 0; i < line2; i++) {
        for (j = 0; j < column2; j++) {
            scanf("%d", &vet2[i][j]);
        }
    }

    if (line1 == line2 && column1 == column2) {
        int vetRes[line1][column1];

        for (i = 0; i < line2; i++) {
            for (j = 0; j < column2; j++) {
                vetRes[i][j] = vet1[i][j] + vet2[i][j];
            }
        }

        for (i = 0; i < line2; i++) {
            for (j = 0; j < column2; j++) {
                printf("%d ", vetRes[i][j]);
            }
            printf("\n");
        }

    } else {
        printf("impossivel");
    }
    
    return 0;
}
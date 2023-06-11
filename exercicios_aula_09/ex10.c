#include <stdio.h>
#include <string.h>
#define SIZE 50

// Ler duas strings A e B e mostrar quantas vezes a string A ocorre dentro da string B.

int main() {
    char strA[SIZE];
    char strB[SIZE];
    int lenA, lenB;
    int i, j, times = 0;

    scanf("%s", strA);
    scanf("%s", strB);

    lenA = strlen(strA);
    lenB = strlen(strB);

    for (i = 0; i <= lenB - lenA; i++) {
        int found = 1;
        for (j = 0; j < lenA; j++) {
            if (strA[j] != strB[i + j]) {
                found = 0;
                break;
            }
        }
        if (found) {
            times++;
        }
    }

    printf("%d\n", times);

    return 0;
}

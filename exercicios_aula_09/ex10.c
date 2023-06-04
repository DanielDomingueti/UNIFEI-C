#include <stdio.h>
#define SIZE 50

//Ler duas strings A e B e mostrar quantas vezes a string A ocorre dentro da string B.

int main() {

    char strA[SIZE];
    char strB[SIZE];
    int counterB = 0, counterA = 0, times = 0;

    scanf("%s", strA);
    scanf(" %s", strB);

    while (strB[counterB] != '\0') {
        if (strA[counterA] == strB[counterB] && strA[counterA] != '\0') {
            counterA++;
        } 
        else if (strA[counterA] == '\0') {
            counterA = counterB;
            times++;
        }
        counterB++;
    }

    printf("%d", times);

    return 0;
}
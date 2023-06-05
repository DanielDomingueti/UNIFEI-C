#include <stdio.h>
#include <stdlib.h>
#define SIZE_STR 100
#define SIZE_NUM 4

//Faça um programa que leia uma frase (string) contendo X valores numéricos reais de precisão dupla (double), separados por espaços.
//A seguir, seu programa deve separar cada número dos demais, convertê-lo para o formato numérico e exibir a soma dos números.

int main() {

    int i = 0, j = 0, x, count = 0;
    char phrase[SIZE_STR];
    char tempStr[SIZE_STR];
    double nums[SIZE_NUM], sum = 0;
    scanf("%[^\n]", phrase);

    while (phrase[i] != '\0') {
        //enquanto a string não apresentar espaços, inclui os dígitos na string temporária
        //caso seja um espaço, resetará o contador J e definirá o \0 da string temporária
        if (phrase[i] != ' ') {
            tempStr[j] = phrase[i];
            j++;
        } else {
            j++;
            tempStr[j] = '\0';
            j = 0;
        }

        //caso seja um espaço, sinal que o número foi inserido completamente na string temporária. Então, será convertido para double na posição count
        if (phrase[i] == ' ' || phrase[i+1] == '\0') {
            sscanf(tempStr, "%lf", &nums[count]);
            count++;

            //resetar string temporária
            for (x = 0; x < SIZE_STR; x++) {
                tempStr[x] = '\0';
            }
        }
        i++;
    }

    for (i = 0; i < SIZE_NUM; i++) {
        sum += nums[i];
    }

    printf("%.6lf", sum);

    return 0;
}
#include <stdio.h>

//Faça um programa que leia uma frase e conte quantos espaços existem na frase.

int main() {

    char phrase[50];
    int i = 0, blankSpaces = 0;

    scanf("%[^\n]", phrase);

    while (phrase[i] != '\0') {
        if (phrase[i] == ' ') blankSpaces++;
        i++;
    }

    printf("%d\n", blankSpaces);

    return 0;
}
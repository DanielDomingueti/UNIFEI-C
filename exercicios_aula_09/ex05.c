#include <stdio.h>
#define SIZE 50

//Faça um programa que leia uma frase e a copie para outro vetor, removendo os espaços em branco. Imprima o segundo vetor.

int main() {

    char phrase[SIZE];
    char newPhrase[SIZE];
    int i = 0, j = 0;

    scanf("%[^\n]", phrase);

    while (phrase[i] != '\0') {
        if (phrase[i] != ' ') {
            newPhrase[j] = phrase[i];
            j++;
        }
        i++;
    }
    newPhrase[j] = '\0';

    printf("%s\n", newPhrase);

    return 0;
}
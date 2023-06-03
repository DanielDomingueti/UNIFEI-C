#include <stdio.h>
#define SIZE 50

//Faça um programa que leia uma frase e a imprima de trás para frente.

int main() {

    char phrase[SIZE];
    char reversedPhrase[SIZE];
    int lastIndex, i = 0;
    
    scanf("%[^\n]", phrase);

    //identifica a ultima posição do vetor com uma letra
    while (phrase[i] != '\0') {
        i++;
    }
    lastIndex = i - 1;

    //preenche o novo vetor reversamente
    i = 0;
    while (phrase[i] != '\0') {
        reversedPhrase[lastIndex] = phrase[i];
        lastIndex--;
        i++;
    }
    reversedPhrase[i] = '\0';
    
    printf("%s\n", reversedPhrase);

    return 0;
}
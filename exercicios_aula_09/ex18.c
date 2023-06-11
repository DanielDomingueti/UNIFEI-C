#include <stdio.h>
#include <string.h>
#define SIZE 20

//Faça um programa que receba duas palavras e as concatene em uma única frase, onde as duas palavras são separadas por espaço.

int main() {

    char firstWord[SIZE];
    char secondWord[SIZE];

    int i = 0;

    scanf("%s", firstWord);
    scanf("%s", secondWord);

    while (firstWord[i] != '\0') {
        i++;
    }

    firstWord[i] = ' ';
    firstWord[i+1] = '\0';

    strcat(firstWord, secondWord);
        
   printf("%s", firstWord);
    return 0;
}
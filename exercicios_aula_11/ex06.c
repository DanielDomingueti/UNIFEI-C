#include <stdlib.h>
#include <stdio.h>

int main() {
    
// Usando apenas ponteiros, escreva um programa que leia uma frase de até 80 caracteres e a imprima em
// ordem reversa convertendo todos os caracteres minúsculos para maiúsculos.
    
    int i, lastIndex;
    char* phrase = NULL;
    char* newPhrase = NULL;

    phrase = (char*) malloc(80 * sizeof(char));
    if (!phrase) exit(1);

    newPhrase = (char*) malloc(80 * sizeof(char));
    if (!newPhrase) exit(1);

    scanf(" %[^\n]", phrase);

    i = 0;
    while (phrase[i] != '\0') {
        i++;
    }
    lastIndex = i;

    i = 0;
    char* initialNewPhrase = newPhrase;
    for (i = lastIndex - 1; i >= 0; i--) {
        
        *initialNewPhrase = phrase[i];
        printf("conteudo phrase[%d]: %c\n", i, phrase[i]);
        printf("conteudo new phrase: %c\n", *initialNewPhrase);

        initialNewPhrase++;
    
    }
    *initialNewPhrase = '\0';

    printf("Frase antiga: %s\n", phrase);
    printf("Frase nova: %s\n", newPhrase);

    return 0;

}
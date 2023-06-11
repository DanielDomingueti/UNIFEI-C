#include <stdio.h>
#include <stdlib.h>
#define SIZE 100

//Faça um programa que receba uma frase e mostre a quantidade de palavras digitadas na frase.

int main() {

    char phrase[SIZE];
    int counter = 0, i = 0; 

    scanf("%[^\n]", phrase);
    
    while (phrase[i] != '\0') {
        if (phrase[i] == ' ') counter++;
        i++;
    }
    counter++;
        
   printf("%d", counter);
    return 0;
}
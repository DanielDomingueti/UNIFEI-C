#include <stdio.h>
#include <ctype.h>
#define SIZE 100

//Faça um programa que receba uma frase e converta a primeira letra de cada palavra para maiúscula.

int main() {

    char phrase[SIZE];
    int i = 0; 

    scanf("%[^\n]", phrase);
    
    while (phrase[i] != '\0') {
        if (phrase[i-1] == ' ') {
            phrase[i] = toupper(phrase[i]);
        }
        i++;
    }
        
   printf("%s\n", phrase);
    return 0;
}
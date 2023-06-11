#include <stdio.h>
#include <ctype.h>
#define SIZE 100

//Faça um programa que receba uma frase e mostre a quantidade de letras minúsculas e de letras maiúsculas digitadas. 
//Imprima os dois valores em uma linha, separados por um único espaço.

int main() {

    char phrase[SIZE];
    int i = 0, upper = 0, lower = 0; 

    scanf("%[^\n]", phrase);
    
    while (phrase[i] != '\0') {
        
        if (phrase[i] != ' ') {
            if (isupper(phrase[i])) {
                upper++;
            } else if islower(phrase[i]) {
                lower++;
            }
        }

        i++;
    }
        
   printf("%d %d", lower, upper);
    return 0;
}
#include <stdio.h>
#define SIZE 100

//Faça um programa que leia uma frase F e dois inteiros I e J. A seguir, imprima os caracteres das posições que vão de I até J, inclusive.

int main() {

    char phrase[SIZE];
    
    int i, j, counter = 0;

    scanf("%[^\n]", phrase);
    scanf("%d", &i);
    scanf("%d", &j);

    while (phrase[counter] != '\0') {
        if (counter >= i && counter <= j) {
            printf("%c", phrase[counter]);
        }
        counter++;
    }

    return 0;
}
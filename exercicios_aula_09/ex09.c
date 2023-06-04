#include <stdio.h>
#define SIZE 100

//Faça um programa que leia uma frase F, um caractere C e um inteiro I.
//Seu programa deve devolver o índice da primeira posição da string onde foi encontrado o caractere C, sendo que a procura começa a partir da posição I.
//Caso o caractere buscado não exista, imprima -1.

int main() {

    char phrase[SIZE];
    char c;
    int i, isThere = 1, count = 0;

    scanf("%[^\n]", phrase);
    scanf(" %c", &c);
    scanf("%d", &i);

    while (phrase[count] != '\0') {
        if (count >= i && phrase[count] == c) {
            isThere = 0;
            break;
        }
        count++;
    }

    if (isThere == 0) {
        printf("%d", count);
    } else {
        printf("-1");
    }

    return 0;
}
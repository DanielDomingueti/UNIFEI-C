#include <stdio.h>

//Faça um programa que leia uma frase e conte quantas vogais a frase possui no total.

int main() {

    char phrase[50];
    int i = 0, counter = 0;

    scanf("%[^\n]", phrase);

    while (phrase[i] != '\0') {
        if (phrase[i] == 'a' || phrase[i] == 'e'|| phrase[i] == 'i' || phrase[i] == 'o' || phrase[i] == 'u' 
            || phrase[i] == 'A'|| phrase[i] == 'E'|| phrase[i] == 'I'|| phrase[i] == 'O'|| phrase[i] == 'U') {
                counter++;
            }
        i++;
    }
    printf("%d\n", counter);

    return 0;
}
#include <stdio.h>
#include <string.h>
#define SIZE 20

//Alice gosta muito da letra A. Alice classifica como string harmônica todas as strings onde mais da metade dos caracteres são A. Por exemplo: "aaabb" e "abaa" são strings harmônicas;
//porém, "xaya" e "abbba" não são. Dada uma string qualquer (sem espaços), Alice quer apagar algumas de suas letras para torná-la harmônica.
//Alice pediu a sua ajuda para escrever um programa que informe qual o maior tamanho da string resultante após ela apagar algumas de suas letras, para torná-la harmônica.
//Considere que a entrada conterá somente letras minúsculas e haverá ao menos um caractere "a", de forma que sempre existe uma resposta.


int main() {

    char phrase[SIZE];
    int i = 0, counterA = 0, strLenght, differenceStrToA;

    scanf("%s", phrase);
    strLenght = strlen(phrase);

    while (phrase[i] != '\0') {
        if (phrase[i] == 'a') counterA++;
        i++;
    }

    differenceStrToA = strLenght - counterA;

    //caso a str de origem seja harmonica
    if (counterA > differenceStrToA) {
        printf("%d", strLenght);
    } else if (counterA == differenceStrToA) {
        printf("%d", strLenght-1);
    } else {
        printf("%d", counterA * 2 - 1);
    }

    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#define SIZE 15

//Faça um programa que leia 4 números inteiros no formato de string, compute a soma dos números lidos e mostre o resultado obtido.

int main() {

    char first[SIZE];
    char second[SIZE];
    char third[SIZE];
    char fourth[SIZE];

    scanf("%s", first);
    scanf(" %s", second);
    scanf(" %s", third);
    scanf(" %s", fourth);

    const int a = atoi(first);
    const int b = atoi(second);
    const int c = atoi(third);
    const int d = atoi(fourth);

    const int sum = a + b + c + d;

    printf("%d", sum);

    return 0;
}
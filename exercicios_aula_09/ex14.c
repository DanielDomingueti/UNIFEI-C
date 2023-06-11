#include <stdio.h>
#include <stdlib.h>
#define SIZE 11
#define FREQ 10

//Faça um programa que leia um número inteiro longo representando o CPF de uma pessoa e, a seguir, 
//mostre o número de vezes que cada dígito aparece no CPF. Siga o formato de saída apresentado no exemplo do Moodle.

int main() {

    int i = 0;
    long long int cpfLongInt;

    char cpfStr[SIZE] = {0};
    int frequencies[FREQ] = {0}; 

    scanf("%lld", &cpfLongInt);
    sprintf(cpfStr, "%lld", cpfLongInt);
    
    while (cpfStr[i] != '\0') {
        frequencies[cpfStr[i]-'0']++;
        i++;
    }
   
   for (i = 0; i < FREQ; i++) {
        printf("%d = %d\n", i, frequencies[i]);
   }

    return 0;
}
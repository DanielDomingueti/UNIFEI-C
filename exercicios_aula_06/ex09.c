#include <stdio.h>

//Faça um programa que leia uma quantidade desconhecida de valores inteiros e mostre a sua média, com 1 casa decimal. 
//O programa deve parar de ler quando um valor negativo for inserido.

int main() {

    int input, sum = 0, counter = 0;
    float avg;

    do {
        scanf("%d", &input);
        if (input > 0) {
            sum += input;
            counter++;
        }
    } while (input > 0);
    
   avg = (1.0 * sum) / (1.0 * counter);

    printf("%.1f", avg);

    return 0;
}
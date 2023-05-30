#include <stdio.h>

//Faça um programa que leia um inteiro positivo N e mostre a soma de seus divisores. 
//Por exemplo, a soma dos divisores de 30 é 1 + 2 + 3 + 5 + 6 + 10 + 15 + 30 = 72. 
//Não deixe o usuário inserir um valor negativo.

int main() {

    int input, counter = 1, i = 1, sum = 0;

    do {
        scanf("%d", &input);
    } while (input < 0);

    while (counter < input && i < input) {
        if (input % i == 0) {
            sum += input;
            counter++;
            i++;
        } else {
            i++;
        }
    }

    printf("%d", sum);

    return 0;
}
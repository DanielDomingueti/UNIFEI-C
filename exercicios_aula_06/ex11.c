#include <stdio.h>

//Faça um programa que leia um inteiro X e mostre a 
//diferença entre o quadrado da soma pela soma dos quadrados dos X primeiros números naturais.
//Exemplo: seja X = 10:
//Quadrado da soma: (1 + 2 + ... + 10)² = (55)² = 3025
//Soma dos quadrados: (1² + 2² + ... + 10²) = 385
//Diferença: 3025 - 385 = 2640


int main() {

    int x, i, j, firstSum = 0, firstProd, secondSum = 0, diff;

    scanf("%d", &x);

    for (i = 1; i <= x; i++) {
        firstSum += i;
    }
    firstProd = (firstSum * firstSum);
    
    for (j = 1; j <= x; j++) {
        secondSum += (j * j);
    }

    diff = firstProd - secondSum;

    printf("%d", diff);

    return 0;
}
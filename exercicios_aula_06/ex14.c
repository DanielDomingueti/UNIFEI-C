#include <stdio.h>
//Faça um programa que leia um número N e mostre a soma dos N primeiros termos da seguinte expressão,
//com precisão de duas casas decimais: S = 0/1 + 2/2 + 4/4 + 6/8 + 8/16 + 10/32 + 12/64 + 14/128 + ...

int main() {

    int n, i;
    int numerador = 0;
    int denominador = 1;

    float sum = 0.0;

    scanf("%d", &n);

    for (i = 1; i < n; i++) {
        numerador += 2;
        denominador *= 2;
        sum += (numerador * 1.0) / (denominador * 1.0);
    }

    printf("%.2f", sum);

    return 0;
}
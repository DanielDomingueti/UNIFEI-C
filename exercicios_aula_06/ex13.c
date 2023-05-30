#include <stdio.h>
//Faça um programa que leia um número N e mostre a soma dos N primeiros termos da seguinte expressão, 
//com precisão de duas casas decimais: S = - 1 + 1/2 - 1/3 + 1/4 - 1/5 + ... + 1/N.

int main() {

    int n, i;
    float sum = 0.0;

    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            sum += (1.0 / i);
        } else {
            sum -= (1.0 / i);
        }
    }

    printf("%.2f", sum);

    return 0;
}
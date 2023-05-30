#include <stdio.h>
//Faça um programa que leia um número N e mostre a soma dos N primeiros termos da seguinte expressão, 
//com precisão de duas casas decimais: S = + 1/1 + 3/2 - 5/3 - 7/4 + 9/5 + 11/6 - 13/7 - 15/8 + ...

int main() {
    int n, i;
    float numerador = 1.0;
    float denominador = 1.0;
    float sum = 0.0;

    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        if (i % 4 == 1 || i % 4 == 2) {
            sum += numerador / denominador;
        } else {
            sum -= numerador / denominador;
        }

        numerador += 2;
        denominador += 1;
    }

    printf("%.2f", sum);

    return 0;
}

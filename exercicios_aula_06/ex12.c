#include <stdio.h>

//Faça um programa que leia um
//número N e mostre a soma dos N primeiros termos da seguinte expressão: S = 1 - 2 + 3 - 4 + 5 - 6 + ... + N.


int main() {

    int n, i, sum = 0;

    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            sum -= i;
        } else {
            sum += i;
        }
    }

    printf("%d", sum);

    return 0;
}
#include <stdio.h>
#include <math.h>

    // Faça uma função que recebe um valor N e retorne o somatório dos quadrados dos números de 1 a N. No Moodle, insira apenas a sua função, que deve ter a seguinte assinatura:
    //int quadrados(int n)

int quadrados(int n);

int quadrados(int n) {
    int i = 1;
    int sum = 0;

    for (i = 1; i <= n; i++) {
        sum += i * i;
    }

    return sum;
}

int main() {
    int n;

    scanf("%d", &n);

    int sum = quadrados(n);
    printf("%.2d\n", sum);

    return 0;
}
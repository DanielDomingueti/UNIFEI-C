#include <stdio.h>

    //Faça uma função que receba um número N e retorne a soma dos algarismos do fatorial de N. No Moodle,
    //insira apenas a sua função, que deve ter a seguinte assinatura: int somafat(int n)

int somafat(int n);

int somafat(int n) {
    int fatorial = 1;
    int soma = 0;

    if (n <= 0) return 0;

    // Calcula o fatorial de N
    for (int i = 1; i <= n; i++) {
        fatorial *= i;
    }

    // Soma os algarismos do fatorial
    while (fatorial != 0) {
        soma += fatorial % 10;
        fatorial /= 10;
    }

    return soma;
}

int main() {

    int n;
    scanf(" %d", &n);

    int res = somafat(n);

    printf("%d ", res);

    return 0;
}
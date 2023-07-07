#include <stdio.h>

    // Faça uma função que recebe um valor N e retorne o valor da soma dos N primeiros termos da série: S = 0 + 1/2! + 2/4! + 3/6! + 4/8! + ...
    //O código deve declarar, também, uma função que calcule o fatorial e seja usada pela função da série.
    //No Moodle, insira apenas as suas funções, que deve ter as seguintes assinaturas:
    //long long int fatorial(int x) double serie(int n)

long long int fatorial(int x);

double serie(int n);

long long int fatorial(int x) {
    
    int i;
    long long int result = 1;

    for (i = 1; i <= x; i++) {
        result *= i;
    }

    return result;
}

double serie(int n) {

    double result = 0.0;
    int i, numerator = 0, denominator = 0;

    for (i = 0; i < n; i++) {
        numerator = i;
        denominator = i * 2;

        result += (double) numerator / fatorial(denominator);
    }

    return result;

}
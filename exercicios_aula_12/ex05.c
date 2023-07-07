#include <stdio.h>

    //Faça uma função que receba dois valores A e B e retorne a soma dos valores no intervalo [A, B]. No Moodle, insira apenas a sua função, que deve ter a seguinte assinatura:
    //int soma(int a, int b)

int soma(int a, int b);

int soma(int a, int b) {
    int sum = 0, i;
    
    for (i = a; i <= b; i++) {
        sum += i;
    }
    return sum;
}
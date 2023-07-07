#include <stdio.h>

    //Faça uma função que receba um número N e retorne a quantidade de números primos menores que N
    //existentes. No Moodle, insira apenas a sua função, que deve ter a seguinte assinatura: int qtdprimos(int n)

int qtdprimos(int n);

int qtdprimos(int n) {
    int i, j, counter = 0;

    for (i = 2; i < n; i++) {
        int innerCounter = 0;
        for (j = 1; j <= i; j++) {
            if (i % j == 0) {
                innerCounter++;
            }
        } 
        if (innerCounter == 2) {
            counter++;
        }
    }
        
    return counter;
}
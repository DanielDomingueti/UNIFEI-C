#include <stdio.h>

//Faça um programa que leia dois inteiros N e X e mostre a soma dos múltiplos de X menores que N. 
//Não deixe o usuário inserir valores negativos.

int main() {

    int n, x, i = 1, sumMultX = 0;
    
    do {
        scanf("%d", &n);
    } while (n < 0);
    
    do {
        scanf("%d", &x);
    } while (x < 0);

    while (i < n) {
        //multiplo de X
        if (i % x == 0) {
            sumMultX += i;
        } 
        i++;
    }

    printf("%d", sumMultX);

    return 0;
}

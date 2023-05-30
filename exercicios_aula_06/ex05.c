#include <stdio.h>

//Faça um programa que leia dois inteiros N e X. A seguir, mostre quais são os N primeiros números
//naturais que são múltiplos de X. Imprima os números em uma única linha, separados entre si por um único espaço.


int main() {

    int n, x, i = 1;
    int count = i;
    
    scanf("%d", &n);
    scanf("%d", &x);

    while (count <= n) {
        if (i % x == 0) {
            printf("%d ", i);
            i++;
            count++;
        }
        i++;
    }
    return 0;
}

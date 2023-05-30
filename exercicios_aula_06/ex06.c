#include <stdio.h>

//Faça um programa que leia dois inteiros A e B, calcule e mostre: 
//a soma dos números pares no intervalo [A, B] e o produto dos números ímpares no intervalo [A, B]. 

//Imprima as duas respostas em uma única linha, separadas entre si por um único espaço.


int main() {

    int a, b, i;
    int parSum = 0;
    int imparProd = 1;
    
    scanf("%d", &a);
    scanf("%d", &b);

    for (i = a; i <= b; i++) {
        if (i % 2 == 0) {
            parSum += i;
        } else {
            imparProd *= i;
        }
    }

    printf("%d %d", parSum, imparProd);

    return 0;
}

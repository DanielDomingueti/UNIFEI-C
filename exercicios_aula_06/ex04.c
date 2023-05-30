#include <stdio.h>

//Faça um programa que leia um inteiro positivo N, calcule e mostre a soma dos N primeiros números ímpares.
//Não deixe o usuário inserir um valor negativo. Se um valor negativo for inserido, continue lendo N.

int main() {

    int n, sum = 0;
    
    do {
        scanf("%d", &n);
    } while (n < 1); 
    
    for (int i = 1; i <= n; i++) {
        sum += 2*i - 1;
    }
    
    printf("%d", sum);
    
    return 0;
}

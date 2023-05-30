#include <stdio.h>

//Faça um programa que leia um inteiro positivo N e mostre quais são os seus divisores. 
//Por exemplo, os divisores de 30 são 1, 2, 3, 5, 6, 10, 15 e 30. 
//Não deixe o usuário inserir um valor negativo. 
//Imprima os números em uma única linha, separados entre si por um único espaço.


int main() {

    int n, i = 1, count = 1;

    do {
        scanf("%d", &n);
    } while (n < 0);

    while (count <= n && i <= n) {
        if (n % i == 0) {
            printf("%d ", i);
            i++;
            count++;
        } else {
            i++;
        }
    }
    return 0;
}

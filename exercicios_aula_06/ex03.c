#include <stdio.h>

//Faça um programa que leia um inteiro N e mostre quais são os N primeiros números ímpares.
//Imprima os números em uma única linha, separados entre si por um único espaço.

int main() {

    int count = 1, value, referenceValue = 1;

    scanf("%d", &value);

    while (count <= value) {
        if (referenceValue % 2 == 1) {
            printf("%d ", referenceValue);
            referenceValue++;
            count++;
        } else {
            referenceValue++;
        }
    }

    return 0;
}
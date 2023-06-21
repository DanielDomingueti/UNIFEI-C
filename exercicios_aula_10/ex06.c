#include <stdio.h>
#define SIZE 8

typedef struct Car {
    char brand[20];
    double price;
    int year;

} Car;

//Faça um programa que leia um vetor de estrutura com os dados de 8 carros: marca, preço e ano. 
//A seguir, leia um valor P e mostre as informações de todos os carros com preço menor que P. Repita esse processo até que seja lido um valor P ≤ 0.

int main() {

    double priceInputs[1000];
    int i = 0, j = 0;
    Car cars[SIZE];

    while (i < SIZE) {
        scanf(" %[^\n]", cars[i].brand);
        scanf("%lf", &cars[i].price);
        scanf("%d", &cars[i].year);
        i++;
    }

    i = -1;
    do {
        i++;
        scanf("%lf", &priceInputs[i]);
    } while (priceInputs[i] > 0.0);

    for (i = 0; i < 1000; i++) {
        if (priceInputs[i] <= 0.0) break;

        printf("Carros mais baratos que %.2lf: \n", priceInputs[i]);
        for (j = 0; j < SIZE; j++) {
            if (cars[j].price < priceInputs[i]) {
                printf("%s %.2lf %d\n", cars[j].brand, cars[j].price, cars[j].year);
            }
        }
        printf("\n");
    }
    
    return 0;
}
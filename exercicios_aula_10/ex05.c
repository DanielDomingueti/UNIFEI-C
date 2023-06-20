#include <stdio.h>
#include <string.h>
#define SIZE 5

typedef struct People {
    char name[50];
    char phone[50];
} People;

//Utilizando um vetor de estrutura, faça um programa que leia o nome e o telefone de 5 pessoas e os imprima em ordem alfabética pelo nome.
//Dica: pesquise os detalhes de uso da função strcmp().

int main() {
    int i, j;
    People people[SIZE], temp;

    for (i = 0; i < SIZE; i++) {
        scanf(" %[^\n]", people[i].name);
        scanf(" %[^\n]", people[i].phone);
    }

    for (i = 0; i < SIZE - 1; i++) {
        for (j = i + 1; j < SIZE; j++) {
            if (strcmp(people[i].name, people[j].name) > 0) {
                temp = people[i];
                people[i] = people[j];
                people[j] = temp;
            }
        }
    }

    for (i = 0; i < SIZE; i++) {
        printf("%s %s\n", people[i].name, people[i].phone);
    }

    return 0;
}

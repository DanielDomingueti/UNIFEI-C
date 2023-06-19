#include <stdio.h>
#include <string.h>

//Faça um programa que leia o nome, a idade e o endereço (rua e número) de uma pessoa e armazene os dados em uma estrutura. Mostre na tela as informações armazenadas

typedef struct person
{
    char name[40];
    int age;
    char address[100];
    int number;

} person;


int main() {

    person p1;

    scanf("%[^\n]", p1.name);
    scanf("%d", &p1.age);
    scanf(" %[^\n]", p1.address);
    scanf("%d", &p1.number);

    printf("Nome: %s\n", p1.name);
    printf("Idade: %d\n", p1.age);
    printf("Endereco: %s, %d\n", p1.address, p1.number);

    return 0;
}
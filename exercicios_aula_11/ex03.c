#include <stdio.h>
#include <stdlib.h>

// Escreva um programa que declare um inteiro, um real e um char, e ponteiros para essas variaveis. Associe
// as variaveis aos ponteiros. Modifique os valores de cada variavel usando os ponteiros. Imprima os valores
// das variaveis antes e apos a modificacão

int main() {

    int integer;
    float decimal;
    char character;

    int* integerPointer = NULL;
    float* decimalPointer = NULL;
    char* characterPointer = NULL;

    integerPointer = (int*) malloc(sizeof(int));
    decimalPointer = (float*) malloc(sizeof(float));
    characterPointer = (char*) malloc(sizeof(char));

    if (!integerPointer || !decimalPointer || !characterPointer) {
        exit(1);
    }

    printf("Digite o valor inteiro: ");
    scanf(" %d", &integer);
    printf("Digite o valor decimal: ");
    scanf(" %f", &decimal);
    printf("Digite o valor character: ");
    scanf(" %c", &character);

    integerPointer = &integer;
    decimalPointer = &decimal;
    characterPointer = &character;

    printf("\nValores das variaveis de origem e respectivos conteudos dos ponteiros.\n");
    printf("Inteiro: %d, Conteudo pointeiro inteiro: %d\n", integer, *integerPointer);
    printf("Decimal: %.2f, Conteudo pointeiro decimal: %.2f\n", decimal, *decimalPointer);
    printf("Character: %c, Conteudo do ponteiro character: %c\n\n", character, *characterPointer);

    printf("Endereco de memoria do proprio ponteiro e pra onde ele aponta.\n");
    printf("Endereco ponteiro inteiro: %p, aponta para: %p igual ao endereco da var. de origem: %p\n", &integerPointer, integerPointer, &integer);
    printf("Endereco ponteiro decimal: %p, aponta para: %p igual ao endereco da var. de origem: %p\n", &decimalPointer, decimalPointer, &decimal);
    printf("Endereco ponteiro character: %p, aponta para: %p igual ao endereco da var. de origem: %p\n", &characterPointer, characterPointer, &character);

    printf("\nDobrando os valores...\n");
    *integerPointer *= 2;
    *decimalPointer *= 2;
    *characterPointer = 'e';

    printf("\nValores das variaveis de origem e respectivos conteudos dos ponteiros.\n");
    printf("Inteiro: %d, Conteudo pointeiro inteiro: %d\n", integer, *integerPointer);
    printf("Decimal: %.2f, Conteudo pointeiro decimal: %.2f\n", decimal, *decimalPointer);
    printf("Character: %c, Conteudo do ponteiro character: %c\n\n", character, *characterPointer);

    printf("Endereco de memoria do proprio ponteiro e pra onde ele aponta.\n");
    printf("Endereco ponteiro inteiro: %p, aponta para: %p igual ao endereco da var. de origem: %p\n", &integerPointer, integerPointer, &integer);
    printf("Endereco ponteiro decimal: %p, aponta para: %p igual ao endereco da var. de origem: %p\n", &decimalPointer, decimalPointer, &decimal);
    printf("Endereco ponteiro character: %p, aponta para: %p igual ao endereco da var. de origem: %p\n", &characterPointer, characterPointer, &character);





    return 0;
}
#include <stdio.h>
#define SIZE 100

//Faça um programa que leia uma frase e verifique se a frase é um palíndromo, ou seja, igual quando lida da esquerda para a direita e da direita para a esquerda.
//Desconsidere os espaços existentes na frase durante a verificação. Seu programa deve imprimir apenas "sim" ou "nao" como resposta.

int main() {

    char phrase[SIZE];
    char noSpacePhrase[SIZE];
    char noSpaceReversedPhrase[SIZE];
    int i = 0, j = 0, lastIndex, isEqual = 0;

    scanf("%[^\n]", phrase);

    //Remove espacos em branco da primeira string
    while (phrase[i] != '\0') {
        if (phrase[i] != ' ') {
            noSpacePhrase[j] = phrase[i];
            j++;
        }
        i++;
    }
    noSpacePhrase[j] = '\0';
    
    //Identifica a ultima posição no vetor da string
    i = 0;
    while (noSpacePhrase[i] != '\0') {    
        i++;
    }
    lastIndex = i - 1;

    //Popula o vetor reverso
    i = 0;
    while (noSpacePhrase[i] != '\0') {
        noSpaceReversedPhrase[lastIndex] = noSpacePhrase[i];

        lastIndex--;
        i++;
    }
    noSpaceReversedPhrase[i] = '\0';

    i = 0;
    while (noSpacePhrase[i] != '\0') {
        if (noSpacePhrase[i] != noSpaceReversedPhrase[i]) isEqual = 1;
        i++;
    }

    if (isEqual == 0) {
        printf("sim\n");
    } else {
        printf("nao\n");
    }
    

    return 0;
}
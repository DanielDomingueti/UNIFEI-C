#include <stdio.h>
#define SIZE 100

//Leia duas frases e mostre a diferença de tamanho entre elas. Sua saída deve estar no padrão: "A frase 1 possui X caracteres a mais/menos que a frase 2."

int main() {

    char firstPhrase[SIZE];
    char secondPhrase[SIZE];
    int i = 0, lastFirstIndex, lastSecondIndex;

    scanf("%[^\n]", firstPhrase);
    scanf(" %[^\n]", secondPhrase);

    while (firstPhrase[i] != '\0') {
        i++;
    }
    lastFirstIndex = i;

    i = 0;
    while (secondPhrase[i] != '\0') {
        i++;
    }
    lastSecondIndex = i;

    int differenceAB = lastFirstIndex - lastSecondIndex;

    if (lastSecondIndex > lastFirstIndex) {
        differenceAB *= -1;
        printf("A frase 1 possui %d caracteres a menos que a frase 2.", differenceAB);
    }
    else if (lastSecondIndex < lastFirstIndex) {
        printf("A frase 1 possui %d caracteres a mais que a frase 2.", differenceAB);
    } else {
        printf("iguais");
    }

    return 0;
}
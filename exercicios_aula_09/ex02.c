#include <stdio.h>

//Modifique o programa anterior para contar a quantidade de cada vogal. Siga o formato de saída apresentado no exemplo do Moodle.

int main() {

    char phrase[50];
    int i = 0, counterA = 0, counterE = 0, counterI = 0, counterO = 0, counterU = 0;

    scanf("%[^\n]", phrase);

    while (phrase[i] != '\0') {

        if (phrase[i] == 'a' || phrase[i] == 'A') counterA++;
        else if (phrase[i] == 'e' || phrase[i] == 'E') counterE++;
        else if (phrase[i] == 'i' || phrase[i] == 'I') counterI++;
        else if (phrase[i] == 'o' || phrase[i] == 'O') counterO++;
        else if (phrase[i] == 'u' || phrase[i] == 'U') counterU++;

        i++;
    }

    printf("A = %d\n", counterA);
    printf("E = %d\n", counterE);
    printf("I = %d\n", counterI);
    printf("O = %d\n", counterO);
    printf("U = %d\n", counterU);


    return 0;
}
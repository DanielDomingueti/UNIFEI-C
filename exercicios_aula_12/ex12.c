#include <stdio.h>
#include <stdlib.h>
#include <string.h>

    //Faça uma função booleana que receba duas strings A e B e verifique se a string A está contida no final
    //da string B. A função deve retornar 0 (para não) ou 1 (para sim). No Moodle, insira apenas a sua função, que
    //deve ter a seguinte assinatura:
    //int afimb(char *a, char *b)

int afimb(char *a, char *b);

int afimb(char *a, char *b) {

    int lastFirstIndex, lastSecondIndex, i = 0;

    while (a[i] != '\0') {
        i++;
    }
    lastFirstIndex = i;

    i = 0;
    while (b[i] != '\0') {
        i++;
    }
    lastSecondIndex = i;

    for (i = lastFirstIndex ; i >= 0; i--) {
        if (a[i] != b[lastSecondIndex]) {
            return 0;
        }
        lastSecondIndex--;
    }

    return 1;
    
}

int main() {

    char *a = NULL, *b = NULL;

    a = (char *) malloc(5 * sizeof(char));
    b = (char *) malloc(10 * sizeof(char));

    strcpy(a, "papel");
    strcpy(b, "guardpapel");

    int res = afimb(a, b);

    printf("resposta: %d\n", res);

    free(a);
    free(b);
  
  return 0;

}
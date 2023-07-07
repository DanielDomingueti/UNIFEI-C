#include <stdio.h>

    //Faça uma função que receba um número inteiro e retorne a soma de seus algarismos. No Moodle, insira seu programa completo (main + funções).

int sum(int n);

int sum(int n) {
    char intToString[15];
    sprintf(intToString, "%d", n);

    int i = 0;
    int sum = 0;
    while (intToString[i] != '\0') {
        //printf("posicao %d, valor = %c \n", i, intToString[i]);
        sum += intToString[i] - '0';
        i++;
    }
        
    return sum;
}

int main() {

    int n;
    scanf("%d", &n);

    int result = sum(n);
    printf("%d\n", result);

    return 0;
}
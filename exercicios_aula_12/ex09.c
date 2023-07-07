#include <stdio.h>

    //Faça uma função que receba um número N e retorne a soma dos algarismos do fatorial de N. No Moodle,
    //insira apenas a sua função, que deve ter a seguinte assinatura: int somafat(int n)

int somafat(int n);

int somafat(int n) {
    
    int sum = 0, fat = 1;
    int i;

    for (i = 1; i <= n; i++) {
        fat *= i;
    }

    i = 0;
    char fatToString[15];
    sprintf(fatToString, "%d", fat);

    while (fatToString[i] != '\0') {
        sum += (int) fatToString[i] - '0';
        i++;
    }
        
    return sum;
}
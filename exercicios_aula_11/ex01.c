#include <stdio.h>
#include <stdlib.h>

int main() {

    //Escreva um programa que contenha duas variáveis inteiras. Compare seus endereços e exiba o maior deles

    int a = 2;
    int b = 40;
    int *x, *y;

    printf("Content of A: %d\n", a);
    printf("Address of A: %d\n", &a);

    x = &a;
    printf("\nfirst attribution (memory reference)\n");

    y = &b;
    printf("\nsecond attribution (memory reference)\n");

    printf("\nX attribution: x = &a; (memory reference)\n");
    printf("Internal address X: %p\n", &x);
    printf("Pointed address X: %p\n", x);
    printf("Content of X: %d\n", *x);


    printf("\nY attribution: y = &b; (pointer memory reference)\n");
    printf("Internal address Y: %p\n", &y);
    printf("Pointed address Y: %p\n", y);
    printf("Content of Y: %d\n", *y);

    printf("\nComparing X and Y memory addresses\n");
    if (x > y) {
        printf("X is greater than Y: %p\n", x);
    } else if (x < y) {
        printf("Y is greater than X: %p\n", y);
    } else {
        printf("Equal addresses\n");
    }

    free(x);
    free(y);
        
    return 0;
}
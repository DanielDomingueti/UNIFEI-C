#include <stdio.h>
#include <stdlib.h>

int main() {

    //Escreva um programa que contenha duas variáveis inteiras. Compare seus endereços e exiba o maior deles

    int a = 2;
    int *x, *y;

    printf("Content of A: %d\n", a);
    printf("Address of A: %d\n", &a);

    x = &a;
    printf("\nfirst attribution to a worked (memory reference)\n");

    y = x;
    printf("\nsecond attribution to a worked (memory reference)\n");

    printf("\nX attribution: x = &a; (memory reference)\n");
    printf("Internal address X: %p\n", &x);
    printf("Pointed address X: %p\n", x);
    printf("Content of X: %d\n", *x);


    printf("\nY attribution: y = x; (pointer memory reference)\n");
    printf("Internal address Y: %p\n", &y);
    printf("Pointed address Y: %p\n", y);
    printf("Content of Y: %d\n", *y);

    printf("\n");

    return 0;
}
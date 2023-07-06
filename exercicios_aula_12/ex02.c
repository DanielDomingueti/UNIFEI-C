

#include <stdio.h>

    //Faça uma função booleana (devolve 0 = não, ou 1 = sim) que recebe um valor inteiro N e retorne se esse
    //número é primo ou não. No Moodle, insira apenas a sua função (sem main, sem includes), que deve ter a seguinte assinatura:
    //int primo(int n)
    //O Moodle irá invocar sua função dentro de um printf para verificar a corretude
    
int primo(int n);

int primo(int n) {
    int primo = 1, i, divisorCounter = 0;
    
    for (i = 1; i <= n; i++) {
        if (n % i == 0) divisorCounter++;
    }

    if (divisorCounter > 2) {
        primo = 0;
    }

    return primo;
}

int main() {
    int n;

    scanf("%d", &n);

    int isPrime = primo(n);
    printf("Numero %d eh primo: %d\n", n, isPrime);

    return 0;
}
#include <stdio.h>

int main() {
    int N, P;
    
    do {
        scanf("%d", &N);
        scanf("%d", &P);
    } while (N <= 0 || P <= 0);
    
    long long fatorialN = 1, fatorialP = 1, fatorialNP = 1;
    int i;
        
    for (i = 1; i <= N; i++) {
        fatorialN *= i;
    }
        
    for (i = 1; i <= P; i++) {
        fatorialP *= i;
    }
        
    for (i = 1; i <= N - P; i++) {
        fatorialNP *= i;
    }
        
    long long resultado = fatorialN / (fatorialP * fatorialNP);
        
    printf("%lld\n", resultado);

    return 0;
}

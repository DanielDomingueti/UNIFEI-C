#include <stdio.h>

int main() {

    int n, i;
    const float numerador = 1.0;
    int denominador = 1;
    float sum = 1.0;

    do {
        scanf("%d", &n);
    } while (n <= 0);

    for (i = 2; i <= n; i++) {
        denominador += 2;
        if (i % 2 == 0) {
            sum -= numerador / (denominador * denominador);
        } else {
            sum += numerador / (denominador * denominador);
        }
    }

    printf("%.4f", sum);
    
    return 0;
}
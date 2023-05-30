#include <stdio.h>

int main() {
    int input, i, counter = 0;
    int vet[5];

    while (counter < 5) {
        scanf("%d", &input);

        int isPrime = 1;
        if (input < 2) {
            isPrime = 0;
        } else {
            for (i = 2; i <= input / 2; i++) {
                if (input % i == 0) {
                    isPrime = 0;
                    break;
                }
            }
        }

        if (isPrime) {
            vet[counter] = input;
            counter++;
        }
    }

    for (i = 0; i < 5; i++) {
        printf("%d ", vet[i]);
    }

    return 0;
}

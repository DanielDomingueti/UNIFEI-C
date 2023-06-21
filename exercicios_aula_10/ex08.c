#include <stdio.h>
#define SIZE 2

typedef struct ComplexNumber {
    double real;
    double imaginary;
} ComplexNumber;

int main() {
    int i;
    double realSum, imaginarySum;
    double realDifference, imaginaryDifference;
    double product;
    ComplexNumber complexNumbers[SIZE];

    for (i = 0; i < SIZE; i++) {
        scanf("%lf", &complexNumbers[i].real);
        scanf("%lf", &complexNumbers[i].imaginary);
    }

    realSum = complexNumbers[0].real + complexNumbers[1].real;
    imaginarySum = complexNumbers[0].imaginary + complexNumbers[1].imaginary;

    realDifference = complexNumbers[0].real - complexNumbers[1].real;
    imaginaryDifference = complexNumbers[0].imaginary - complexNumbers[1].imaginary;

    product = (complexNumbers[0].real * complexNumbers[1].real) - (complexNumbers[0].imaginary * complexNumbers[1].imaginary);

    printf("Soma: %f + (%f)i\n", realSum, imaginarySum);
    printf("Subtracao: %f + (%f)i\n", realDifference, imaginaryDifference);
    printf("Produto: %f + (%f)i\n", product, (complexNumbers[0].real * complexNumbers[1].imaginary) + (complexNumbers[0].imaginary * complexNumbers[1].real));

    return 0;
}

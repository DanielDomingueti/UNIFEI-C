

#include <stdio.h>

    //Faça uma função que receba três notas de um aluno e uma letra. Se a letra for ‘A’, a função deve calcular
    //a média aritmética das notas do aluno; se for ‘P’, deve calcular a média ponderada, com pesos 5, 3 e 2. No
    //Moodle, insira seu programa completo (main + funções).

float calculateAverage(float grade1, float grade2, float grade3, char letter);

float calculateAverage(float grade1, float grade2, float grade3, char letter) {
    if (letter == 'A') {
        return (grade1 + grade2 + grade3) / 3;
    }
    else if (letter == 'P') {
        return ((grade1 * 5) + (grade2 * 3) + (grade3 * 2)) / 10.0;
    } else {
        return 0;
    }
}

int main() {
    float n1, n2, n3;
    char letter;

    scanf("%f %f %f %c", &n1, &n2, &n3, &letter);

    float finalGrade = calculateAverage(n1, n2, n3, letter);
    printf("%.2f\n", finalGrade);

    return 0;
}
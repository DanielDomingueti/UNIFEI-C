#include <stdio.h>
#include <string.h>

//Crie uma estrutura representando os dados de um aluno: matrícula, nome, nota da primeira prova, nota da segunda prova e nota da terceira prova. 
//a) entre com os dados de 5 alunos. 
//b) encontre o aluno com maior nota na primeira prova, imprimindo seu nome completo e a nota, com 2 casas decimais.
//c) encontre o aluno com maior média geral, imprimindo seu nome completo, seguido da média, com 2 casas decimais. 
//d) imprima uma listagem de matrícula e nome, dizendo também se cada aluno foi aprovado ou reprovado, considerando ao menos 60% de média para a aprovação.

typedef struct student
{
    int registration;
    char name[40];
    double firstGrade, secondGrade, thirdGrade;
    double averageGrade;

} student;


int main() {

    student students[5];

    int i = 0;
    while (i < 5) {
        scanf("%d", &students[i].registration);
        scanf(" %[^\n]", students[i].name);
        scanf("%lf", &students[i].firstGrade);
        scanf("%lf", &students[i].secondGrade);
        scanf("%lf", &students[i].thirdGrade);
        students[i].averageGrade = (students[i].firstGrade + students[i].secondGrade + students[i].thirdGrade) / 3;
        i++;
    }

    double largestFirstGrade = 0.0;
    char largestFirstGradeName[40];
    for (i = 0; i < 5; i++) {
        if (students[i].firstGrade > largestFirstGrade) {
            largestFirstGrade = students[i].firstGrade;
            strcpy(largestFirstGradeName, students[i].name);
        }
    }
    printf("Maior nota na P1: %.2lf\n", largestFirstGrade);
    printf("%s\n", largestFirstGradeName);


    double largestAverageGrade = 0.0;
    char largestAverageGradeName[40];
    for (i = 0; i < 5; i++) {
        if (students[i].averageGrade > largestAverageGrade) {
            largestAverageGrade = students[i].averageGrade;
            strcpy(largestAverageGradeName, students[i].name);
        }
    }
    printf("\nMaior media: %s\n", largestAverageGradeName);
    printf("Valor: %.2lf\n\n", largestAverageGrade);

    for (i = 0; i < 5; i++) {
        char approved[10] = "Aprovado";
        if (students[i].averageGrade < 6.0) strcpy(approved, "Reprovado");
        printf("%d %s %s\n", students[i].registration, students[i].name, approved);
    }

    return 0;
}
#include <stdio.h>
#include <string.h>

//Crie uma estrutura para armazenar os dados de um aluno: nome, número de matrícula e curso. Leia as
//informações de 5 alunos e armazene em um vetor dessa estrutura. A seguir, imprima os dados de todos osalunos na tela.
//Siga o formato de saída mostrado no Moodle.

typedef struct student
{
    char name[40];
    int registration;
    char course[100];

} student;


int main() {

    student students[5];

    int i = 0;
    while (i < 5) {
        scanf(" %[^\n]", students[i].name);
        scanf("%d", &students[i].registration);
        scanf(" %[^\n]", students[i].course);
        i++;
    }

    i = 0;
    while (i < 5) {
        printf("Aluno %d: \n", i+1);
        printf("Nome: %s\n", students[i].name);
        printf("Matricula: %d\n", students[i].registration);
        printf("Curso: %s\n", students[i].course);
        printf("\n");
        i++;
    }

    return 0;
}
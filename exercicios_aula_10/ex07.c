#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 8

typedef struct Book {
    char title[50];
    char author[100];
    int year;
} Book;

int main() {
    int i = 0;
    Book books[SIZE];
    char nameInput[100];
    char** storedAuthors = (char**)malloc(SIZE * sizeof(char*));  // Vetor de strings para armazenar os nomes dos autores
    int storedAuthorsCount = 0;  // Contador para acompanhar o número de nomes de autores armazenados

    while (i < SIZE) {
        scanf(" %[^\n]", books[i].title);
        scanf(" %[^\n]", books[i].author);
        scanf("%d", &books[i].year);

        // Verificar se o nome do autor já foi armazenado anteriormente
        int authorExists = 0;
        for (int j = 0; j < storedAuthorsCount; j++) {
            if (strcmp(books[i].author, storedAuthors[j]) == 0) {
                authorExists = 1;
                break;
            }
        }

        // Se o nome do autor não foi armazenado anteriormente, armazená-lo
        if (!authorExists) {
            storedAuthors[storedAuthorsCount] = (char*)malloc(strlen(books[i].author) + 1);
            strcpy(storedAuthors[storedAuthorsCount], books[i].author);
            storedAuthorsCount++;
        }

        i++;
    }

    // Mostrar os títulos e anos dos livros escritos por um autor
    while (1) {
        scanf(" %[^\n]", nameInput);

        if (strcmp(nameInput, "sair") == 0) {
            break;
        }

        printf("Livros de %s:\n", nameInput);
        for (int j = 0; j < SIZE; j++) {
            if (strcmp(books[j].author, nameInput) == 0) {
                printf("%s (%d)\n", books[j].title, books[j].year);
            }
        }
        printf("\n");

    }

    // Liberar a memória alocada para os nomes dos autores
    for (int j = 0; j < storedAuthorsCount; j++) {
        free(storedAuthors[j]);
    }
    free(storedAuthors);

    return 0;
}

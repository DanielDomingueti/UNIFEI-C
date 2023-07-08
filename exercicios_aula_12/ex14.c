// Faça uma função que receba um valor N e dois vetores de tamanho N. A função deve alocar um terceiro
// vetor, formado pela soma dos dois vetores recebidos e devolvê-lo ao main. Por fim, o main imprime o vetor
// soma, sendo um elemento separado do outro por um único espaço. Use apenas aritmética de ponteiros, isto
// é, faça este programa sem usar colchetes. O main deve ler o valor N, alocar e ler os dois vetores. No
// Moodle, insira seu programa completo (main + funções).

#include <stdio.h>
#include <stdlib.h>

int* sumArrays(int* a, int* b, int size);

int* sumArrays(int* a, int* b, int size) {
    int i;
    int* soma = NULL;

    soma = (int*) malloc(size * sizeof(int));

    if (!soma) {
        printf("erro de alocacao");
        exit(1);
    }
    
    int* sumPointer = soma;
    int* aPointer = a;
    int* bPointer = b;


        
    for (i = 0; i < size; i++) {
        *sumPointer = *aPointer + *bPointer;
        //printf("\nValor de A: %d, B: %d, Soma: %d\n", *aPointer, *bPointer, *sumPointer);
        sumPointer++;
        aPointer++;
        bPointer++;
    }
    
    return soma;
}

int main() {

    int size, i, input;
    int* a = NULL;
    int* b = NULL;

    scanf(" %d", &size);

    a = (int*) malloc(size * sizeof(int));
    b = (int*) malloc(size * sizeof(int));

    //leitura a
    for (i = 0; i < size; i++) {
        //printf("Leitura do vetor A posicao %d: ", i+1);
        scanf(" %d", &input);
        a[i] = input;
    }

    //leitura b
    for (i = 0; i < size; i++) {
        //printf("Leitura do vetor B posicao %d: ", i+1);
        scanf(" %d", &input);
        b[i] = input;
    }

    int* c = NULL;
    c = sumArrays(a, b, size);

    for (i = 0; i < size; i++) {
        printf("%d ", c[i]);
    }

    return 0;
}
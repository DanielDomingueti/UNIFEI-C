//Seja a seguinte struct para representar pontos no espaço 2D:
//struct Ponto
//{
    //int x, y;
//};
//Faça uma função booleana (devolve 0 = não, ou 1 = sim) que receba um Ponto P e verifique se ele está
//contido no interior de um retângulo. O retângulo é definido por dois pontos: o vértice inferior esquerdo (v1)
//e o vértice superior direito (v2). Para todos os pontos, leia as coordenadas X e Y. No Moodle, insira seu
//programa completo (main + funções).
#include <stdio.h>

struct Ponto {
    int x, y;
};

int verificaPonto(struct Ponto v1, struct Ponto v2, struct Ponto p) {
    if (p.x > v1.x && p.x < v2.x && p.y > v1.y && p.y < v2.y) {
        return 1; // Ponto está contido no retângulo ou na borda
    } else {
        return 0; // Ponto está fora do retângulo
    }
}


int main() {
    struct Ponto v1, v2, p;

    //printf("Digite as coordenadas do ponto (p):\n");
    //printf("X: ");
    scanf(" %d", &p.x);
    //printf("Y: ");
    scanf(" %d", &p.y);

    //printf("Digite as coordenadas do vértice inferior esquerdo (v1):\n");
    //printf("X: ");
    scanf("%d", &v1.x);
    //printf("Y: ");
    scanf(" %d", &v1.y);

    //printf("Digite as coordenadas do vértice superior direito (v2):\n");
    //printf("X: ");
    scanf(" %d", &v2.x);
    //printf("Y: ");
    scanf(" %d", &v2.y);

    int resultado = verificaPonto(v1, v2, p);

    printf("%d\n", resultado);

    return 0;
}

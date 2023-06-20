#include <stdio.h>
#include <math.h>
#define SIZE 6

typedef struct PolarCoordinate {
    double radius;
    double argument;

} PolarCoordinate;

typedef struct CartesianCoordinate {
    double x;
    double y;

} CartesianCoordinate;

//Crie uma estrutura para representar pontos em coordenadas polares: raio r e argumento a (em graus). 
//Crie uma estrutura para representar pontos em coordenadas cartesianas: x e y. 
//Leia 6 pontos em coordenadas polares e armazene em um vetor.
//A seguir, converta esses pontos para coordenadas cartesianas e armazene o resultado em outro vetor.
//A conversão é dada por: x = r * cos(a) e y = r * sen(a). Por fim, mostre o resultado de cada ponto em coordenadas cartesianas (x, y), com 1 casa decimal.
//Lembre-se que o valor do argumento deve estar em radianos para usar as funções cos e sin

int main() {

    PolarCoordinate polarCoordinates[SIZE];
    CartesianCoordinate cartesianCoordinates[SIZE];

    int i = 0;
    while (i < SIZE) {
        scanf("%lf", &polarCoordinates[i].radius);
        scanf("%lf", &polarCoordinates[i].argument);
        i++;
    }

    for (i = 0; i < SIZE; i++) {
        double radians = polarCoordinates[i].argument * acos(-1) / 180.0;
        cartesianCoordinates[i].x = polarCoordinates[i].radius * cos(radians);
        cartesianCoordinates[i].y = polarCoordinates[i].radius * sin(radians);
    }

    for (i = 0; i < SIZE; i++) {
        printf("(%.2lf, %.2lf)\n", cartesianCoordinates[i].x, cartesianCoordinates[i].y);
    }

    return 0;
}
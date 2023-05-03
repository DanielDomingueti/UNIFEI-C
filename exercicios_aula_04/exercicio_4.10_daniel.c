#include <stdio.h>

//Uma máquina demora 17 segundos para produzir uma peça. Faça um programa que leia a quantidade de peças que devem ser produzidas e mostre o tempo em horas, minutos e segundos necessários para produzir essa quantidade de peças. Por exemplo, se um operador deseja produzir 4 peças, a máquina gastaria 68 segundos. Nesse caso, o programa daria como resposta: 0 horas, 1 minuto e 8 segundos. Em sua resposta, indique somente os números, separados por um único espaço entre eles. Por exemplo: 0 1 8.

int main() {

	const int productionTimePerUnit = 17;
	int pieceQuantity;
	int requiredProductionTimeSeconds;
	int hours, minutes, seconds;
	
	//printf("Indique a quantidade de peças a serem produzidas: ");
	scanf("%d", &pieceQuantity);
	
	requiredProductionTimeSeconds = pieceQuantity * productionTimePerUnit;
	
	hours = requiredProductionTimeSeconds / 3600;
	requiredProductionTimeSeconds = requiredProductionTimeSeconds % 3600;
	
	minutes = requiredProductionTimeSeconds / 60;
	
	seconds = requiredProductionTimeSeconds % 60;
	
	printf("%d %d %d\n", hours, minutes, seconds);
	
	return 0;
}

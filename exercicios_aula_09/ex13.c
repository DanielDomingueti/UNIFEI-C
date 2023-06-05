#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE_STR 10
#define SIZE_NUM 4

int main() {
    int i, count = 0;
    char firstNum[SIZE_STR];
    char secondNum[SIZE_STR];
    char thirdNum[SIZE_STR];
    char fourthNum[SIZE_STR];
    char tempStr[SIZE_STR];

    char strSum[SIZE_STR];
    double nums[SIZE_NUM], sum = 0;

    scanf("%s", firstNum);
    scanf(" %s", secondNum);
    scanf(" %s", thirdNum);
    scanf(" %s", fourthNum);

    strcpy(tempStr, firstNum);
    sscanf(tempStr, "%lf", &nums[count]);
    count++;

    strcpy(tempStr, secondNum);
    sscanf(tempStr, "%lf", &nums[count]);
    count++;

    strcpy(tempStr, thirdNum);
    sscanf(tempStr, "%lf", &nums[count]);
    count++;

    strcpy(tempStr, fourthNum);
    sscanf(tempStr, "%lf", &nums[count]);
    count++;

    for (i = 0; i < SIZE_NUM; i++) {
        sum += nums[i];
    }

    // Converte a soma de double para string
    sprintf(strSum, "%.0lf", sum);

    printf("%s\n", strSum);

    return 0;
}

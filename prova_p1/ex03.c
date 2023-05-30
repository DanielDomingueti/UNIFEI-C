#include <stdio.h>

#define athletes 8

int main()
{
    float time[athletes];
    int i, j, index[athletes];
    
    for (i = 0; i < athletes; i++) {
        scanf("%f", &time[i]);
    }
    
    float temp;
    
    for (i = 0; i < athletes; i++) {
        index[i] = i;
    }
    
    for (i = 0; i < athletes - 1; i++) {
        for (j = 0; j < athletes - i - 1; j++) {
            if (time[j] > time[j + 1]) { 
                temp = time[j];
                time[j] = time[j + 1];
                time[j + 1] = temp;
                
                temp = index[j];
                index[j] = index[j + 1];
                index[j + 1] = temp;
            }
        }
    }
    
    printf("%f %d\n", time[0], index[0]);
    printf("%f %d\n", time[1], index[1]);
    printf("%f %d\n", time[2], index[2]);
    
    return 0;
}

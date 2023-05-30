#include <stdio.h>

int main() {

    int firstAngle, secondAngle, thirdAngle, largest;

    scanf("%d", &firstAngle);
    scanf("%d", &secondAngle);
    scanf("%d", &thirdAngle);

    largest = firstAngle;
    if (secondAngle > largest) {
        largest = secondAngle;
    }
    
    if (thirdAngle > largest) {
        largest = thirdAngle;
    }

    if (largest < 90) {
        printf("acutangulo");
    } else if (largest == 90) {
        printf("retangulo");
    } else {
        printf("obtusangulo");
    }
    
    return 0;
}
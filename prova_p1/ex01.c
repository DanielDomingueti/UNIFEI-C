#include <stdio.h>

int main() {

    int lang;
    char sex, school;

    scanf("%d", &lang);
    scanf(" %c", &sex);
    scanf(" %c", &school);

    if ((lang >= 2 && sex == 'M' && school == 'M') 
        || (lang >= 1 && sex == 'M' && school == 'S') 
            || (lang >= 3 && sex == 'F' && school == 'M') 
                || (lang >= 2 && sex == 'F' && school == 'S')) {
                    printf("sim");
    } else {
        printf("nao");
    }
    
    return 0;
}
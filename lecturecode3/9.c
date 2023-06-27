#include <stdio.h>
#include <stdlib.h>


void numberCheck() {
    int number;

    printf("number: ");
    scanf("%d", &number);

    switch (number) {
        case 10:
            printf("Number is 10");
            break;
        case 50:
            printf("Number is 50");
            break;
        case 100:
            printf("Number is 100");
            break;
        default:
            printf("Number is not equal to 10, 50 or 100");
    }
}


int main() {
    numberCheck();
    return 0;
}
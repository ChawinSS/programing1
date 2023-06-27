#include <stdio.h>
#include <stdlib.h>

void oddOrEvenUsingSwitch() {
    int number;

    printf("number: ");
    scanf("%d", &number);

    switch (number % 2) {
        case 0:
            printf("Even");
            break;
        default:
            printf("Odd");
    }
}

int main() {
    oddOrEvenUsingSwitch();
    return 0;
}
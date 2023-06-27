#include <stdio.h>
#include <stdlib.h>


void evenOrOdd() {
    int number;

    printf("Number: ");
    scanf("%d", &number);

    if (number % 2 == 0) {
        printf("%d is even", number);
    } else {
        printf("%d is odd", number);
    }
}


int main() {
    evenOrOdd();
    return 0;
}
#include <stdio.h>
#include <stdlib.h>


void evenNumber() {
    int number;

    printf("Number: ");
    scanf("%d", &number);

    if (number % 2 == 0) {
        printf("%d is even", number);
    }
}



int main() {
    evenNumber();
    return 0;
}
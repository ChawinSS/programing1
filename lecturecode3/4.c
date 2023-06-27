#include <stdio.h>
#include <stdlib.h>

void whileExample2() {
    int i = 1, number;

    printf("number: ");
    scanf("%d", &number);

    while (i <= 12) {
        printf("%d\n", number * i);
        i++;
    }
}

int main() {
    whileExample2();
    return 0;
}
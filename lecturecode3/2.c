#include <stdio.h>
#include <stdlib.h>

void forLoopExample2() {
    int number;

    printf("number: ");
    scanf("%d", &number);
    printf("\n");
    for (int i = 1; i <= 12; i++) {
        printf("%d x %d: %d\n",i,number, number * i);
    }
}

int main() {
    forLoopExample2();
    return 0;
}
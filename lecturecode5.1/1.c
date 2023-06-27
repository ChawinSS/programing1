#include <stdio.h>

/*
 * Break
 */

void useBreak() {
    int number;
    printf("Input a number: ");
    scanf("%d", &number);

    for (int i = 1; i <= 100; i++) {
        printf("%d ", i);
        if (number == i) {
            break;
        }
    }
}

int main (){
    useBreak();
    return 0;
}
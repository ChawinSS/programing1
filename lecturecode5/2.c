#include <stdio.h>

/*
 * Break
 */

void useBreak() {
    int number;
    printf("Input a number: ");
    scanf("%d", &number);

    for (int i = 1; i <= 30; i++) {
        if (number == i) {
            continue;
        }
        printf("%d ", i);
    }
}

int main (){
    useBreak();
    return 0;
}
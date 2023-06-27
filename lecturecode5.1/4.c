#include <stdio.h>

/*
 * goto
 */

void useGotoForBreak() {
    int number;
    printf("Input a number: ");
    scanf("%d", &number);

    for (int i = 1; i <= 100; i++) {
        printf("%d ", i);
        if (number == i) {
            goto out;
        }
    }
    out:
    printf("Out of the loop");
}

int main (){
    useGotoForBreak();
    return 0;
}
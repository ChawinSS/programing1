#include <stdio.h>

void rightAngleTriangle() {
    int rows;
    printf("Input: ");
    scanf("%d", &rows);

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
}


int main() {
    rightAngleTriangle();
    return 0;
}
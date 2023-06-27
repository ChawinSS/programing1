#include <stdio.h>
#include <stdlib.h>


void largestNumber() {
    int a, b, c;
    printf("Enter 3 numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a > b && a > c) {
        printf("a: %d is the largest", a);
    }

    if (b > a && b > c) {
        printf("b: %d is the largest", b);
    }

    if (c > b && c > a) {
        printf("c: %d is the largest", c);
    }

    if (a == b && a == c) {
        printf("All are equal");
    }
}



int main() {
    largestNumber();
    return 0;
}
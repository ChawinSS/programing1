#include <stdio.h>
#include <stdlib.h>

void whileExample1() {
    int i = 1;
    while (i <= 10) {
        printf("%d\n", i);
        i++;
    }
}

int main() {
    whileExample1();
    return 0;
}
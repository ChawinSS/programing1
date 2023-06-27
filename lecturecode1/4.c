#include <stdio.h>

void runtimeError() {
    int a = 2;
    int b = 6-6;
    int c = a/b;

    printf("The value of b is %d", c);
}

int main() {
    runtimeError();
    return 0;
}
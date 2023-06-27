#include <stdio.h>

void runtimeError() {
    int a = 10;
    int b = 3;
    float c =(float) a/b;

    printf("The value of b is %f", c);
}

int main() {
    runtimeError();
    return 0;
}
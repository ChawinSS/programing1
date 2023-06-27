#include <stdio.h>

void syntaxError() {
    int a = 10;
    printf("Value of a: %d", a);
}

int main() {
    syntaxError();
    return 0;
}
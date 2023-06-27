#include <stdio.h>

void semanticErrors() {
    int a = 2, b = 3, c = 1;
    c = a + b;
    printf("%d",c);
}

int main() {
    semanticErrors();
    return 0;
}
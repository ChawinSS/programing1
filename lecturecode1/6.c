#include <stdio.h>

#define PI 3.1416

void useDefineConst() {
    printf("PI: %.4f\n", PI);
}

void useConst() {
    const float pi = 3.1416;
    printf("pi: %.4f", pi);
}

int main() {
    useDefineConst();
    useConst();
    return 0;
}
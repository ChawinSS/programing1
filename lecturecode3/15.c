#include <stdio.h>
#include <stdlib.h>


void shifting() {
    int a = 100;
    int b = a >> 1;
    printf("b: %d", b);
}



int main() {
    shifting();
    return 0;
}
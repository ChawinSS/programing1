#include <stdio.h>


void swapByRef(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    printf("After swapping in swap function a = %d, b = %d\n", *a, *b);
}

void swapByRefMain() {
    int a = 10;
    int b = 20;
    printf("Before swapping in main a = %d, b = %d\n", a , b);
    swapByRef(&a, &b);
    printf("After swapping in main a = %d, b = %d\n", a, b);
}

int main (){
    swapByRefMain();
    return 0;
}
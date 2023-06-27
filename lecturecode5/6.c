#include <stdio.h>

void swap(int a, int b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("After swapping in swap function a = %d, b = %d\n", a, b);
}

void swapMain() {
    int a = 10;
    int b = 20;
    printf("Before swapping in main a = %d, b = %d\n", a , b);
    swap(a, b);
    printf("\nAfter swapping in main a = %d, b = %d\n", a, b); ///pass by value show no effect in outsiude of thir function
}

int main (){
    swapMain();
    return 0;
}
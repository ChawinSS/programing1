#include <stdio.h>

/*
 * Call by reference
 */
void changeByReference(int *num) {
    printf("Before adding the value inside function change -> num = %d \n", *num);
    *num += 100;
    printf("After adding the value inside function change -> num = %d \n", *num);
}

void callByReference() {
    int x = 100;
    printf("Before callByReference call x = %d \n", x);
    changeByReference(&x);
    printf("After callByReference call x = %d \n", x);
}

int main (){
    callByReference();
    return 0;
}

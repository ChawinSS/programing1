#include <stdio.h>

/*
 * Break
 */

void useBreak() {
    int number;
    printf("Input a number: ");
    scanf("%d", &number);

    for (int i = 1; i <= 100; i++) {
        printf("%d ", i);
        if (number == i) {
            break;
        }
    }
}

/*
 * goto
 */
void useGoto() {
    int num, i = 1;

    printf("Enter the number: ");
    scanf("%d", &num);
    
    table:
    printf("%d x %d = %d\n", num, i, num * i);
    i++;
    if(i <= 10) {
        goto table;
    }
}

void useGotoForBreak() {
    int number;
    printf("Input a number: ");
    scanf("%d", &number);

    for (int i = 1; i <= 100; i++) {
        printf("%d ", i);
        if (number == i) {
            goto out;
        }
    }
    out:
    printf("Out of the loop");
}

/*
 * Continue
 */
void useContinue() {
    int number;
    printf("Input a number: ");
    scanf("%d", &number);

    for (int i = 1; i <= 100; i++) {
        if (number == i) {
            continue;
        }
        printf("%d ", i);
    }
}

/*
 * Call by value
 */
void change(int num) {
    printf("Before adding the value inside function change -> num = %d \n", num);
    num += 100;
    printf("After adding the value inside function change -> num = %d \n", num);
}

void callByValue() {
    int x = 100;
    printf("Before callByValue call x = %d \n", x);
    change(x);
    printf("After callByValue call x = %d \n", x);
}

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
    printf("After swapping in main a = %d, b = %d\n", a, b);
}

/*
 * Call by reference
 */
void changeByReference(int *num) {
    printf("Before adding the value inside function change -> num = %d \n", *num);
    (*num) += 100;
    printf("After adding the value inside function change -> num = %d \n", *num);
}

void callByReference() {
    int x = 100;
    printf("Before callByReference call x = %d \n", x);
    changeByReference(&x);
    printf("After callByReference call x = %d \n", x);
}

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

// Main
int main() {
    swapByRefMain();
    return 0;
}

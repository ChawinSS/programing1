#include <stdio.h>

void change(int num) {
    printf("Before adding the value inside function change -> num = %d \n", num); //2
    num += 100;
    printf("After adding the value inside function change -> num = %d \n", num); //3
}

void callByValue() {
    int x = 100;
    printf("Before callByValue call x = %d \n", x); //1
    change(x);
    printf("After callByValue call x = %d \n", x); //4
}

int main (){
    callByValue();
    return 0;
}
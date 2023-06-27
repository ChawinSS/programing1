#include<stdio.h>
#include<stdlib.h>

void showOneDArray();

int main() {
showOneDArray();
    return 0;
}

void showOneDArray() {
    int marks[5];   // Declaration

    // Initialization
    marks[0] = 80;
    marks[1] = 60;
    marks[2] = 70;
    marks[3] = 85;
    marks[4] = 75;

    // Array traversal
    for (int i = 0; i < 5; i++) {
        printf("%d\n", marks[i]);
    }
}

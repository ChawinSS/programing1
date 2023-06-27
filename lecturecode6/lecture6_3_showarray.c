#include<stdio.h>
#include<stdlib.h>

void oneDArrayWithDifferentDeclaration();

int main() {
oneDArrayWithDifferentDeclaration();
    return 0;
}

void oneDArrayWithDifferentDeclaration() {
    int marks[5] = {20, 30, 40, 50, 60};   // Declaration + initialization

    // Array traversal
    for (int i = 0; i < 5; i++) {
        printf("%d\n", marks[i]);
    }
}

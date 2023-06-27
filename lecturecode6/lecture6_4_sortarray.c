#include<stdio.h>
#include<stdlib.h>

void sortArray();

int main() {
sortArray();
    return 0;
}

void sortArray() {
    int a[10] = {19, 9, 7, 101, 23, 44, 12, 78, 34, 23};
    // sorted: 7, 9, 12, 19, 23, 23, 34, 44, 78, 101

    // Bubble Sort
    int temp;
    for (int i = 0; i < 10; i++) {
        for (int j = i+1; j < 10; j++) {
            if(a[i] > a[j]) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    printf("Printing sorted array: \n");
    for (int i = 0; i < 10; i++) {
        printf("%d  ", a[i]);
    }
}

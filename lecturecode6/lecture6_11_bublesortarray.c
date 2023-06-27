#include <stdio.h>
#include <stdlib.h>

void printArray(int *a, int size);
void getSortedArray(int *a, int size);

int main() {
   int a[5] = {5, 3, 5, 2, 7};
   printArray(a, 5);
   getSortedArray(a, 5);
   printArray(a, 5);
    return 0;
}

void getSortedArray(int *a, int size) {
    for (int i = 0; i < size; ++i) {
        for (int j = i+1; j < size; ++j) {
            if(a[i] > a[j]) {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

void printArray(int *a, int size) {
    printf("Printing the array: \n");
    for (int i = 0; i < size; ++i) {
        printf("%d\n", a[i]);
    }
}
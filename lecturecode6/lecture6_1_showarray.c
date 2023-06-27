#include<stdio.h>
#include<stdlib.h>

void printArray(int *a, int size);

int main() {
   int a[5] = {5, 3, 5, 2, 7};
   printArray(a, 5);
    return 0;
}

void printArray(int *a, int size) {
    printf("\nPrinting the array: \n");
    for (int i = 0; i < size; ++i) {
        printf("%d\n", a[i]);
    }
    printf("\n");
}

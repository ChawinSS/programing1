#include<stdio.h>
#include<stdlib.h>

struct array {
    int arr[8];
};

struct array getArrayUsingStructure();
void scanArray(int *a, int size);
void printArray(int *a, int size);

int main() {

    struct array x = getArrayUsingStructure();
    printArray(x.arr, 8);

    return 0;
}

struct array getArrayUsingStructure() {
    struct array y;
    scanArray(y.arr, 8);
    return y;
}

void scanArray(int *a, int size) {
    printf("Input the array: \n");
    for (int i = 0; i < size; ++i) {
        scanf("%d", &a[i]);
    }
}

void printArray(int *a, int size) {
    printf("Printing the array: \n");
    for (int i = 0; i < size; ++i) {
        printf("%d\n", a[i]);
    }
}
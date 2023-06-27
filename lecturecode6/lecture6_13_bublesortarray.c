#include <stdio.h>
#include <stdlib.h>


void printArray(int *a, int size);
int* getArrayUsingMalloc();

int main() {

   int *ptr;
   ptr = getArrayUsingMalloc();
   int size = sizeof(*ptr) + 1;
   printArray(ptr, size);

    return 0;
}

int* getArrayUsingMalloc() {
    int size;

    printf("Enter the sizwe of the array: ");
    scanf("%d", &size);

    int *p = malloc(sizeof(size));

    printf("\nEnter the elements in an array");
    for (int i = 0; i < size; ++i) {
        scanf("%d", &p[i]);
    }

    return p;
}

void printArray(int *a, int size) {
    printf("Printing the array: \n");
    for (int i = 0; i < size; ++i) {
        printf("%d\n", a[i]);
    }
}
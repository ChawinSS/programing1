#include <stdio.h>
#include <stdlib.h>

void printArray(int *a, int size);

int main() {

int size,i;

    printf("Enter the sizwe of the array: ");
    scanf("%d", &size);

    int *p = malloc(size*sizeof(int));

    printf("\nEnter the elements in an array");
    for (int i = 0; i < size; ++i) {
        scanf("%d", &p[i]);
    }
    printArray(p,size);

    return 0;
}

void printArray(int *a, int size) {
    printf("Printing the array: \n");
    for (int i = 0; i < size; ++i) {
        printf("%d\n", a[i]);
    }
}
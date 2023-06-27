#include <stdio.h>
#include <stdlib.h>


void printArray(int *a, int size);
int* getArrayWithStaticvar();

int main() {

   int *ptr= getArrayWithStaticvar();
   int size = sizeof(*ptr)/ sizeof(0[ptr]);
   printf("size: %d", size);
   printArray(ptr, size);

    return 0;
}

int* getArrayWithStaticvar() {
    static int arr[7];

    printf("Enter the elements is an array: ");

    for (int i = 0; i < 7; ++i) {
        scanf("%d", &arr[i]);
    }

    return arr;
}

void printArray(int *a, int size) {
    printf("\nPrinting the array: \n");
    for (int i = 0; i < size; ++i) {
        printf("%d\n", a[i]);
    }
}
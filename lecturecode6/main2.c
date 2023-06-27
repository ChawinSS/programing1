#include <stdio.h>
#include <stdlib.h>

struct array {
    int arr[8];
};

void showOneDArray();
void oneDArrayWithDifferentDeclaration();
void sortArray();
void largestAndSecondLargestElement();
void showTwoDArray();
void showAndPrintMatrix();
void getArray(int arr[]);
int minimumNumInArray(int arr[], int size);
void bubbleSort(int *a, int size);
void getSortedArray(int *a, int size);
void printArray(int *a, int size);
int* getArrayUsingMalloc();
int* getArrayWithStaticvar();
void scanArray(int *a, int size);
struct array getArrayUsingStructure();

int main() {
//    int a[5] = {5, 3, 5, 2, 7};
//    printArray(a, 5);
//    getSortedArray(a, 5);
//    printArray(a, 5);

//    int *ptr;
//    ptr = getArrayUsingMalloc();
//    int size = sizeof(*ptr) + 1;
//    printArray(ptr, size);

//    int *ptr;
//    ptr = getArrayWithStaticvar();
//    int size = sizeof(ptr)/ sizeof(0[ptr]);
//    printf("size: %d", size);
//    printArray(ptr, size);

    struct array x = getArrayUsingStructure();
    printArray(x.arr, 8);

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

void oneDArrayWithDifferentDeclaration() {
    int marks[5] = {20, 30, 40, 50, 60};   // Declaration + initialization

    // Array traversal
    for (int i = 0; i < 5; i++) {
        printf("%d\n", marks[i]);
    }
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

void largestAndSecondLargestElement() {
    int n = 10;
    int array[n];
    int largest, secondLargest;

    printf("Elements of the array?");
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    largest = array[0];
    secondLargest = array[1];

    for (int i = 0; i < n; i++) {
        if(array[i] > largest) {
            secondLargest = largest;
            largest = array[i];
        } else if(array[i] > secondLargest && array[i] != largest) {
            secondLargest = array[i];
        }
    }

    printf("Largest = %d\nSecond largest = %d", largest, secondLargest);
}

void showTwoDArray() {
    int arr[4][3] = {
            {1, 2, 3},
            {2, 3, 4},
            {3, 4, 5},
            {4, 5, 6}
    };

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            printf("arr[%d][%d] = %d\n", i, j, arr[i][j]);
        }
    }
}

void showAndPrintMatrix() {
    int arr[3][3];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Enter arr[%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    printf("\nPrinting the array: \n");
    for (int i = 0; i < 3; i++) {
        printf("\n");
        for (int j = 0; j < 3; j++) {
            printf("%d\t", arr[i][j]);
        }
    }
}

void getArray(int arr[]) {
    printf("Elements of the array are: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
}

int minimumNumInArray(int arr[], int size) {
    int min = arr[0];
    for (int i = 1; i < size; ++i) {
        if(min > arr[i])
            min = arr[i];
    }
    return min;
}

void bubbleSort(int *a, int size) {
    for (int i = 0; i < size; ++i) {
        for (int j = i+1; j < size; ++j) {
            if(a[j] < a[i]) {
                int temp = a[j];
                a[j] = a[i];
                a[i] = temp;
            }
        }
    }

    printf("Printing the sorted array: \n");
    for (int i = 0; i < size; ++i) {
        printf("%d\n", a[i]);
    }
}

void getSortedArray(int *a, int size) {
    for (int i = 0; i < size; ++i) {
        for (int j = i+1; j < size; ++j) {
            if(a[j] < a[i]) {
                int temp = a[j];
                a[j] = a[i];
                a[i] = temp;
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

void scanArray(int *a, int size) {
    printf("Input the array: \n");
    for (int i = 0; i < size; ++i) {
        scanf("%d", &a[i]);
    }
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

int* getArrayWithStaticvar() {
    static int arr[7];

    printf("Enter the elements is an array: ");

    for (int i = 0; i < 7; ++i) {
        scanf("%d", &arr[i]);
    }

    return arr;
}

struct array getArrayUsingStructure() {
    struct array y;
    scanArray(y.arr, 8);
    return y;
}
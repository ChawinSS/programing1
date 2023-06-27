#include<stdio.h>
#include<stdlib.h>

void largestAndSecondLargestElement();

int main() {
largestAndSecondLargestElement();
    return 0;
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
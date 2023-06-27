#include <stdio.h>
#include <stdlib.h>

int minimumNumInArray(int arr[], int size);

int main() {
   int a[5] = {5, 3, 5, 2, 7};
   int b;
   b=minimumNumInArray(a, 5);
   printf("the minimun is %d\n",b);
    return 0;
}

int minimumNumInArray(int arr[], int size) {
    int min = arr[0];
    for (int i = 1; i < size; ++i) {
        if(min > arr[i])
            min = arr[i];
    }
    return min;
}




#include<stdio.h>
#include<stdlib.h>

void showTwoDArray();

int main() {
showTwoDArray();
    return 0;
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
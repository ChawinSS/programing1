#include<stdio.h>
#include<stdlib.h>

void showAndPrintMatrix();

int main() {
showAndPrintMatrix();
    return 0;
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

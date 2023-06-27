#include <stdio.h>

void logicalError() {
    int sum = 0;
    int k = 1;

    for (int i = 1; i <= 10; i++) {
        sum = sum + k;
        k++;
    }

    printf("The value of sum is %d", sum);
}

int main() {
    logicalError();
    return 0;
}
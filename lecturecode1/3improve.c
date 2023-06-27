#include <stdio.h>

void logicalError() {
    int sum = 0;
    int k = 1;

    for (int i = 1; i <= 10; i++) {
        sum += k;
        k++; //1+2+3+4+5+6+7+8+9+10
    }

    printf("The value of sum is %d", sum);
}

int main() {
    logicalError();
    return 0;
}
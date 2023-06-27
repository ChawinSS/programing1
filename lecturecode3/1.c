#include <stdio.h>
#include <stdlib.h>

void digitSum() {
    int number, sum = 0;

    printf("Number: ");
    scanf("%d", &number);

    while (number != 0) {/*input 133> not equalto 0 sum=3 num=13.3 
                                while 13.3!=0 sum=6 num=1.33
                                while 1.33!=0 sum=7 num=0.133
                                while 0=0*/
        sum += number % 10;
        number /= 10;
    }

    printf("Digit sum: %d", sum);
}
int main() {
    digitSum();
    return 0;
}
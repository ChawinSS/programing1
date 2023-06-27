#include <stdio.h>

void ternaryOperator() {
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    (age>18) ? printf("its an adult"): printf("No");

}

int main() {
    ternaryOperator();
    return 0;
}
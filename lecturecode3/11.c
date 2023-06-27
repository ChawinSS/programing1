#include <stdio.h>
#include <stdlib.h>


void eligibleToVote() {
    int age;
    printf("Age: ");
    scanf("%d", &age);

    if (age >= 18) {
        printf("The person is eligible to vote!");
    } else {
        printf("The person is not eligible to vote!");
    }
}


int main() {
    eligibleToVote();
    return 0;
}
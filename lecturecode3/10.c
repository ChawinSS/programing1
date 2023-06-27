#include <stdio.h>
#include <stdlib.h>


void grading() {
    int marks;

    printf("Marks in exam: ");
    scanf("%d", &marks);

    if (marks >= 90) {
        printf("The student got A");
    } else if (marks >= 80 && marks < 90) {
        printf("The student got B");
    } else if (marks >= 70 && marks < 80) {
        printf("The student got C");
    } else if (marks >= 60 && marks < 70) {
        printf("The student got D");
    } else {
        printf("The student failed the course!");
    }
}


int main() {
    grading();
    return 0;
}
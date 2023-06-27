#include <stdio.h>

/*
 * Problem: Right angle triangle
 * n = 4
 *      *
        **
        ***
        ****
 * */

void rightAngleTriangle() {
    int rows;
    printf("Input: ");
    scanf("%d", &rows);

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
}

/*
 * Problem: Numerical right angle triangle
 *
 * n = 4
 *
 *      1
        2 3
        4 5 6
        7 8 9 10
 */

void numericalRightAngleTriangle() {
    int rows, k = 1;
    printf("Input: ");
    scanf("%d", &rows);

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", k++);
        }
        printf("\n");
    }
}

/*
 * Problem: Asterisk pyramid
 *
 * n = 4
 *
 *      *
       * *
      * * *
     * * * *
 */

void asteriskPyramid() {
    int rows, space;
    printf("Input: ");
    scanf("%d", &rows);

    space = rows - 1;

    for (int i = 1; i <= rows; i++) {
        for (int j = space; j > 0; j--) {
            printf(" ");
        }
        for (int k = 1; k <= i; k++) {
            printf("* ");
        }
        printf("\n");
        space--;
    }
}


/*
 * Problem: Factorial
 *
 * n = 4
 * n! = 4 * 3 * 2 * 1 = 24
 *
 * n! = n * (n-1) * (n-2) * .... * 1
 */

void factorial() {
    int n, fact = 1;
    
    printf("Input: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        fact *= i;
    }

    printf("%d! = %d", n, fact);
}

int main() {
    factorial();
    return 0;
}

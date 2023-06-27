#include <stdio.h>
#include <stdlib.h>


void doWhileExample1() {
    char c;
    int choice, dummy;

    do {
        printf("\n1. Print Hello\n2. Print SRH\n3. Exit\n");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Hello");
                break;
            case 2:
                printf("SRH");
                break;
            case 3:
                exit(0);
        }

        printf("\n\nDo you want to print more?");
        scanf("%d", &dummy);
        scanf("%c", &c);
    } while (c == 'q');
}


int main() {
    doWhileExample1();
    return 0;
}
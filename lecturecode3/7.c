#include <stdio.h>
#include <stdlib.h>



void nestedSwitch() {
    int i, j;

    printf("numbers: ");
    scanf("%d %d", &i, &j);

    switch (i) {
        case 10:
            printf("The value of i evaluated in outer switch: %d\n", i);
            break;
        case 20:
            switch (j) {
                case 100:
                    printf("The value of j evaluated in inner switch: %d\n", j);
                    break;
                case 1000:
                    printf("The value of j evaluated in inner switch: %d\n", j);
                    break;
                default:
                    printf("j  is not matched with the value!");
            }
            break;
        default:
            printf("i is not matched with the value!");
    }
}



int main() {
    nestedSwitch();
    return 0;
}
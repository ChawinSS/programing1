#include <stdio.h>

/*
 * goto
 */

void useGoto() {
    int num, i = 1;

    printf("Enter the number: ");
    scanf("%d", &num);
    
    table:
    printf("%d x %d = %d\n", num, i, num * i);
    i++;
    if(i <= 10) {
        goto table;
    }
}

int main (){
    useGoto();
    return 0;
}
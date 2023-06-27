#include<stdio.h>

int main (){
    int row=5,column=5;
    int i,j;

    for(i=1;i<=row;i++){
        for(j=1;j<=column;j++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
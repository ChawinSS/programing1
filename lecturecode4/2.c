#include <stdio.h>

void pyrimid() {
    int number;

    printf("number: ");
    scanf("%d", &number);

    for(int i=1;i<=number;i++){
        for(int j=1;j<=number*2-1;j++){
        if(j>=number-(i-1)&&j<=number+(i-1)){
              printf("*");  
              }
              else{
            printf(" ");  
              }
        }
            printf("\n");
    }
}


int main() {
    pyrimid();
    return 0;
}
#include<stdio.h>
int start,i;
int main(){
    printf("\nstatment 1");
    goto end;
    
    printf("\nstatment 2");
    
    end:
    printf("\nstatment 3");

    return 0;
}
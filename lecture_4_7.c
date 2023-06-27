/*void function*/
#include<stdio.h>
#include<stdlib.h>

void sum(int num1, int num2);

int main(){
    int a=7,b=2;
    sum(a,b);
    return 0;
}

void sum(int num1, int num2)
{
    int c;
    c = num1+ num2;

    printf("\n%d",c);
}
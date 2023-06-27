/*void function*/
#include<stdio.h>
#include<stdlib.h>

int passbyre(int *ptr1, int *ptr2);

int main(){
    int a=10,b=20;
    printf("\nThe original numbers %d %d",a,b);
    passbyre(&a,&b);
    printf("\nThe numbers after passed by values %d %d\n",a,b);
    return 0;
}

int passbyre(int *ptr1, int *ptr2)
{
        *ptr1 =20;
        *ptr2 =10;
}
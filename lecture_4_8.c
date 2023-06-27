/*void function*/
#include<stdio.h>
#include<stdlib.h>

int passbyva(int x, int y);

int main(){
    int a=10,b=20;
    printf("\nThe original numbers %d %d",a,b);
    passbyva(a,b);
    printf("\nThe numbers after passed by values %d %d",a,b);
    return 0;
}

int passbyva(int x, int y)
{
        int x=20;
        int y=10;

}
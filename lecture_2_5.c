/*pointer*/
#include<stdio.h>


int main(){

int a=100;

int* ptr;

ptr=&a;
printf("\nPointer\t\t initializa * &assign with =&'v' \t (percdnt)p for address \t (percdnt)d *for access value throug pointer \n");
printf("\n%d\n",a);

printf("%p\n",ptr);

printf("%d\n",*ptr);

*ptr=31; //assign new value

printf("\n%d\n",a);

printf("%p\n",ptr);

printf("%d\n",*ptr);

    return 0;
}
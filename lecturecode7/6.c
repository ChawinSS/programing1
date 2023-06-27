#include <stdio.h>
#include <stdlib.h>
// pointer

int main() {
int i=10;
double d=10.123456;
char a ='a';

int *ip =&i;
double *dp =&d;
char *ap =&a;

printf("\nvalue of i is %d\n",i);
printf("value of d is %f\n",d);
printf("value of a is %c\n",a);

printf("\naddress of i is %p\n",ip);
printf("address of d is %p\n",dp);
printf("address of a is %p\n",ap);

printf("\nsize of i is %d\n",sizeof(i));
printf("size of d is %d\n",sizeof(d));
printf("size of a is %d\n",sizeof(a));

printf("\nsize of pointer ip is %d\n",sizeof(ip));
printf("size of pointer dp is %d\n",sizeof(dp));
printf("size of pointer ap is %d\n",sizeof(ap));

printf("\nthe address of ip is %p and the value is %d\n",ip, *ip);
printf("the address of dp is %p and the value is %f\n",dp, *dp);
printf("the address of ap is %p and the value is %c\n",ap, *ap);
    return 0;
}

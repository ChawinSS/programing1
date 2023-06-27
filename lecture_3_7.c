#include<stdio.h>
int d,i=1;
int main(){
    printf("\ninput number");
    scanf("%d",&d);
    printf("\nN is %d loop:\n",d);
while(i<=d){
    printf("%d\n",i);
i++;}
    return 0;
}
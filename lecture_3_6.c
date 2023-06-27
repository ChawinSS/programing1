#include<stdio.h>
int d;
int main(){
    printf("\ninput number");
    scanf("%d",&d);
    printf("\nN is %d loop:\n",d);
for(int i=1;i<=d;i++){
    printf("%d\n",i);
}
    return 0;
}
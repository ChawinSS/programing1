#include<stdio.h>
int start,i;
int main(){
    printf("\ninput number");
    scanf("%d",&start);

    printf("\nN is %d loop:\n",start);
    i=start;
while(i>=1){
    printf("%d\n",i);
    i--;
}
    return 0;
}
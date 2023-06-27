#include<stdio.h>
int start,i;
int main(){
    printf("\ninput number");
    scanf("%d",&start);

    printf("\nN is %d loop:\n",start);
for(i=start;i>=1;i--){
    printf("%d\n",i);
}
    return 0;
}
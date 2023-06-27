#include<stdio.h>
int i,start=0, result;

int main(){

do{
    printf("\n Input number above 0: ");
    scanf("%d",&start);
    
    if(start>0){
        result+=start;
    printf("\n%d",result);
    }
}
while(start>0);
    printf("\n Exist ");
    return 0;
}
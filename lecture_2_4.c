/*array data tpe*/
#include<stdio.h>


int main(){
int a[3]={1,2,3};
char b[3]={'a','b','c'};

printf("\nArray\t\t (percent)d or c \t most loop to print\n");
for(int i=0;i<3;i++){
  printf("%d,",a[i]);  
}
printf("\n\n");
for(int i=0;i<3;i++){
  printf("%c,",b[i]);  
}

    return 0;
}
#include<stdio.h>
int i,roll,column;
int main(){
    printf("\nrow :");
    scanf("%d",&roll);
    fflush(stdin);
    printf("\ncolumn :");
    scanf("%d",&column);
        fflush(stdin);

for(int k=0;k<column;k++){
    printf("\n");  
    for(int i=0;i<roll;i++){
            printf("$ ");
       }
}
    return 0;
}
#include<stdio.h>
int row, column;
char symbol;
int main(){
    printf("\nrow :");
    scanf("%d",&row);
    fflush(stdin);

    printf("\nsymbol :");
    scanf("%c",&symbol);
    fflush(stdin);

for(int i=1;i<=row;i++){
    for(int j=1;j<=row;j++){
            printf("%c",symbol);
    }
    printf("\n");
}
    return 0;
}
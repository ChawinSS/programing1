/*Conditional Operators*/

#include<stdio.h>
int main(){
printf("input \t\t\t\t\t\tOutputs Gats\n");
printf("A | X\tAND &\t\tNAND ~&\t\tOR |\t\tNOR ~|\t\tEX-OR ^|\tEX-NOR ^~|\n\n");

printf("0 | 0\t 0 \t\t 1\t\t 0\t\t 1\t\t 0\t\t 1\n");
printf("0 | 1\t 0 \t\t 1\t\t 1\t\t 0\t\t 1\t\t 0\n");
printf("1 | 0\t 0 \t\t 1\t\t 1\t\t 0\t\t 1\t\t 0\n");
printf("1 | 1\t 1 \t\t 0\t\t 1\t\t 0\t\t 0\t\t 1\n\n");

//printf(">>right shift <<leftshift\n\n");

printf("A&X\n");
printf("Decimal\tBinary\n\n");

printf("7\t 0111\n");
printf("4\t 0100\n");
printf("--------------\n");
printf("&\t 0100-->4\n\n");

printf("A|X\n");
printf("Decimal\tBinary\n\n");

printf("7\t 0111\n");
printf("4\t 0100\n");
printf("--------------\n");
printf("|\t 0111-->7\n\n");

printf("~A\n");
printf("Decimal\tBinary\n\n");

printf("7\t 0111\n");
printf("--------------\n");
printf("~\t 1000-->8\n\n");
    return 0;
}
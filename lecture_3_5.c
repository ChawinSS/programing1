/*input number generate day
using switch and break and default*/
#include<stdio.h>
#include<stdlib.h>

int main(){
    int num; // create intiger variable 
    printf("\n1-2:"); //Display ask for input
    scanf("%d",&num); //input with intiger = %d 

    switch(num){ //switch case take varaible input match with constrain from each cases then display
        case 1: printf("The day is monday. The number is %d\n",num);
        break; //break out of the case

        case 2: printf("The day is tuesday. The number is %d\n",num);
        break;

        default: //default when user inut wrong number
        printf("\nWrong number\n");
        break;
    }
    return 0;
}
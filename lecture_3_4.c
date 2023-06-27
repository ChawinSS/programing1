/*Conditional Operators*/
int input;
#include<stdio.h>
int main(){
  printf("input num");
  scanf("%d",&input);

  if(input>0){  
    if(input%2==0){
      printf("the num is positive and even");
      }
      else{      
        printf("the num is positive and odd");
        }
    }
  else if (input<0){
        if(input%2==0){
      printf("the num is negative and even");
    }      else{      
        printf("the num is negative and odd");
        }
        }
 
  else{
    printf("invalid");}

    return 0;
}
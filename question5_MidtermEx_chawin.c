#include<stdio.h>

void func(int input);

int input,z;

int main(){
  printf("\ninput num : ");
  scanf("%d",&input);

func(input);
    return 0;
}

void func(int input){

  if(input%2==0){  
z=input/2;
printf("\n%d is even, so I take half: %d\n",input,z);
    }
  else if (input%2!=0){
z=(input*3)+1;
printf("\n%d is odd, so I make 3n+1: %d\n",input,z);
  }
}
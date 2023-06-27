/*Conditional Operators*/

#include<stdio.h>
int main(){
const char x=6; //00000110
int y=12; //00001100
int z=0; 

 z=x&y; //4 00000100
 printf("\nAnd = %d\n",z);

 z=x|y; //14 00001110
  printf("\nOr = %d\n",z);

   z=x^y; //10 00000110
  printf("\nEXOr = %d\n",z);

    z=x<<1 ; //12 00001100
  printf("\nEXOr = %d\n",z);

      z=x<<2 ; //24 00011000
  printf("\nEXOr = %d\n",z);

    z=x>>1 ; //3 00000011
  printf("\nEXOr = %d\n",z);

      z=x>>2 ; //3 00000001
  printf("\nEXOr = %d\n",z);

 z=x&y; //4 00000100
  printf("\nEXOr = %d\n",~z); //4 00000100-> -5 11111011

     z=x|y; //14 00001110
  printf("\nuh = %d\n",~z); //14 00001110-> -15 11110001
    return 0;
}
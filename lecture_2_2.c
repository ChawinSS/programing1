/*static variable*/
#include<stdio.h>

int fu1();

int main(){
printf("\n %d\n",fu1());
printf("\n %d\n",fu1());
printf("\n %d\n",fu1());

    return 0;
}

int fu1(){
    static int num=0; //static variable store value for next time use
    num++;
    return num;
}
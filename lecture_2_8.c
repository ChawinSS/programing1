/*union the diffent from struct is union share a same memoer location*/
#include<stdio.h>
#include<string.h>

union charactor {
    char letter;
    int num;
};
int main(){

union charactor z;

z.num=90;

union charactor *ptr=&z;

printf("\nthe charactor is %c and the number is %d\n\n",ptr->letter,ptr->num);
    return 0;
}
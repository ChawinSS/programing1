/*loacl variable and autovariable
https://www.youtube.com/watch?v=xaZ9U8_IZrw
*/

#include<stdio.h>
int a=3; //global

void sum(int x, int y);

int main(){
    int b=10,c=2; //local variable it can be seend only in main function

    printf("\n\nlocal variables %d %d\n",b,c);
    printf("\n\nglobal variables %d\n",a);

    sum(b,c); // we however can pass variable through parameter as we do (b,c)->(x,y)

    return 0;
}

void sum(int x, int y){ //recieve a parameter of (b,c) throug a socall chanel (x,y) 
//now the variable of b,c turn to be x,y

int result;

//    printf("\n\nlocal variables %d %d\n",b,c); //local variable can only be seen on thire scope
    printf("\n\nglobal variables %d\n",a); //global vaiable can be indicate all over the program
                                            //accessing b and c inside sum function is impossible

result= x+y;
printf("\n\nresult is %d\n",result);
}
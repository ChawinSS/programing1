/*void function*/
#include<stdio.h>
#include<stdlib.h>

int recu_test(int n);

int main(){
    int n=100;
    printf("\n %d\n",recu_test(n));
    return 0;
}

int recu_test(int n){
if (n==0){
    return n;
    }
else{
    return n + recu_test(n-2);
}
}

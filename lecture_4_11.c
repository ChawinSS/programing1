/*void function*/
#include<stdio.h>
#include<stdlib.h>

long double recu_test(double n);

int main(){
    long double n;
    printf("\ninput number:");
    scanf("%Lf",&n);
    printf("Factoial of %.0Lf is %.0Lf\n",n,recu_test(n));
    return 0;
}

long double recu_test(double n){
if (n==1){
    return 1;
    }
else{
    return n*recu_test(n-1);
}
}

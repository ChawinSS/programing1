#include <stdio.h>

int factorial(int n){
    int d;
    if(n==1){
        return 1;
    }
    else{
        d=n*factorial(n-1);
        return d;
    }
}

int main() {
    printf("%d",factorial(5));
    return 0;
}
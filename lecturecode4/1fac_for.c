#include <stdio.h>

void factorial() {
int n=5;
int fac=1;
for(int i=1;i<=n;i++){
    fac*=i;
}
printf("%d",fac);
}

int main() {
    factorial();
    return 0;
}
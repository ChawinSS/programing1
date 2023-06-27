#include <stdio.h>
#include <stdbool.h>

void ternaryOperator() {
    int age;
    bool isAdult;

    printf("Enter your age: ");
    scanf("%d", &age);

    isAdult = age > 18 ? true : false;
if(isAdult==true){    printf("Adult: %d\n", isAdult);    
printf("its an adult");}
else{    printf("No");}

}

int main() {
    ternaryOperator();
    return 0;
}
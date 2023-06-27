#include <stdio.h>
#include <stdlib.h>

typedef struct person {
    int age;
    float weight;
    char name[30];
} Person;

void example() {
   Person person;
   Person *personPtr = &person;

   printf("Enter age: ");
   scanf("%d", &personPtr->age);

   printf("Enter weight: ");
   scanf("%f", &personPtr->weight);

   printf("Show: \n");
   printf("Age: %d\n", person.age);
   printf("Weight: %f\n", person.weight);
}


int main() {

    example();

    return 0;
}

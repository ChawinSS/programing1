#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct person {
    int age;
    float weight;
    char name[30];
} Person;

Person getInfo() {
    Person p1;

    printf("Enter name: ");
    scanf("%s", p1.name);

    printf("Enter age: ");
    scanf("%d", &p1.age);

    return p1;
}

int main() {

    Person p = getInfo();
    printf("\nDisplay Info\n");
    printf("Name: %s", p.name);
    printf("\nAge: %d", p.age);

    return 0;
}

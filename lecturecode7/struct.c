#include <stdio.h>
#include <stdlib.h>
//#include <string.h>

//typedef struct Location {
//    float lat;
//    float lng;
//} Location;
//
//typedef struct Address {
//    char street[50];
//    int hourse;
//    char city[50];
//    int zipcode;
//    char country[50];
//    Location location;
//} Address;
//
//typedef struct Person {
//    char name[50];
//    int id;
//    int age;
//    Address address;
//} Person;

typedef struct person {
    int age;
    float weight;
    char name[30];
} Person;

//void example() {
//    Person person;
//    Person *personPtr = &person;
//
//    printf("Enter age: ");
//    scanf("%d", &personPtr->age);
//
//    printf("Enter weight: ");
//    scanf("%f", &personPtr->weight);
//
//    printf("Show: \n");
//    printf("Age: %d\n", person.age);
//    printf("Weight: %f\n", person.weight);
//}

Person getInfo() {
    Person p1;

    printf("Enter name: ");
    scanf("%s", p1.name);

    printf("Enter age: ");
    scanf("%d", &p1.age);

    return p1;
}

void display(Person *person) {
    printf("Name: %s\tAge: %d\n", person->name, person->age);
}

void example() {
    Person person;
    Person *personPtr;
    int n;

    printf("Enter the number of persons: ");
    scanf("%d", &n);

    // allocating memory for n persons
    personPtr = (Person*) calloc(n, sizeof(Person));

    for (int i = 0; i < n; ++i) {
        printf("Enter first name and age respectively: ");

        scanf("%s %d", (personPtr+i)->name, &(personPtr+i)->age);
    }

    printf("Displaying info: \n");
    for (int i = 0; i < n; ++i) {
        display(personPtr+i);
    }

    free(personPtr);
}

int main() {
//    Person person1;
//
//    strcpy(person1.name, "Michael");
//    person1.id = 132345;
//    person1.age = 57;
//
//    printf("Name: %s\n", person1.name);
//    printf("Id no.: %d\n", person1.id);
//    printf("Age: %d\n", person1.age);
//
//    struct Person person2;
//    example();

    Person p = getInfo();
    printf("\nDisplay Info\n");
    printf("Name: %s", p.name);
    printf("\nAge: %d", p.age);

    return 0;
}

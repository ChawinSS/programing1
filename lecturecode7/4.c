#include <stdio.h>
#include <stdlib.h>

typedef struct person {
    int age;
    float weight;
    char name[30];
} Person;

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
    
   example();

    return 0;
}

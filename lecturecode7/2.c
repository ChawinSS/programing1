#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Location {
   float lat;
   float lng;
} Location;

typedef struct Address {
   char street[50];
   int hourse;
   char city[50];
   int zipcode;
   char country[50];
   Location location;
} Address;

typedef struct Person {
   char name[50];
   int id;
   int age;
   Address address;
} Person;


int main() {
   Person person1;

   strcpy(person1.name, "Michael");
   person1.id = 132345;
   person1.age = 57;

   printf("Name: %s\n", person1.name);
   printf("Id no.: %d\n", person1.id);
   printf("Age: %d\n", person1.age);

    return 0;
}

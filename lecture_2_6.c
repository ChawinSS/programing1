/*struct*/
#include<stdio.h>
#include<string.h>

struct students {
    char name[12];
    int score;
};
int main(){

struct students student1;
struct students student2;

strcpy(student1.name,"Brooo");
student1.score=1;

strcpy(student2.name,"Bobii");
student2.score=100;

struct students student3={"Brush",90};

printf("\nthe name is %s and the score is %d",student1.name, student1.score);
printf("\nthe name is %s and the score is %d",student2.name, student2.score);
printf("\nthe name is %s and the score is %d\n",student3.name, student3.score);
    return 0;
}
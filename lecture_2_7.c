/* typedef struct*/
#include<stdio.h>
#include<string.h>

typedef struct {
    char name[12];
    int score;
}students;
int main(){

students student1;
students student2;

strcpy(student1.name,"Brooo");
student1.score=1;

strcpy(student2.name,"Bobii");
student2.score=100;

students student3={"Brush",90};

printf("\nthe name is %s and the score is %d",student1.name, student1.score);
printf("\nthe name is %s and the score is %d",student2.name, student2.score);
printf("\nthe name is %s and the score is %d\n",student3.name, student3.score);
    return 0;
}
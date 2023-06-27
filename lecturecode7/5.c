#include <stdio.h>
// unionmember use same memory location on each key
//usually use for haski code 65="A"
// size of union taken by the lastgest member of union

//strcut member dont share same memory location
typedef union unionJob {
    char name[32];
    float salary;
    int workerNo;
} UnionJob;


int main() {

    UnionJob j;
    j.salary = 12.3;
    j.workerNo = 100;

    printf("\nSalary: %.1f\n", j.salary);
    printf("Number of workers = %d\n", j.workerNo);

    return 0;
}

#include<stdio.h>
#include<string.h>

typedef struct {
    char name[20];
    int id;
    float rating;
} emp;

void processEmp(emp);//suply prototype with struct alias


int main()
{
    emp emp1 = {0,0,0}; //Initialize members
    processEmp(emp1); //pass structure by value
    printf("\nID: %d\n", emp1.id);
    printf("Name: %s\n", emp1.name);
    printf("Salary: $%.2f\n", emp1.rating);

}
void processEmp(emp emps)//receives a copy of the structure
{
    emps.id = 123;
    strcpy(emps.name, "Sheila");
    emps.rating = 65000.00;

}
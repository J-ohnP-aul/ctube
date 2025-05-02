#include<stdio.h>
#include<string.h>

typedef struct {
    char name[20];
    int id;
    float rating;
} emp;

void processEmp(emp);//suply prototype with struct alias
void processEMP(emp *);



int main()
{
    //passing a struct by value
    emp emp1 = {0,0,0}; //Initialize members
    processEmp(emp1); //pass structure by value
    printf("\nID: %d\n", emp1.id);
    printf("Name: %s\n", emp1.name);
    printf("Salary: $%.2f\n", emp1.rating);
    /////////////////

    printf("\n Passinng by reference\n");
    processEMP(&emp1);
    printf("\nID: %d\n", emp1.id);
    printf("Name: %s\n", emp1.name);
    printf("Salary: $%.2f\n", emp1.rating);
    /////////////////

    
    // passing a stryct by reference
    typedef struct{
        char name[20];
        float score;
    } p;
    
    p player1 = {0, 0};//instance of a struct
    p *ptrPlayer;
    ptrPlayer = &player1;

    strcpy(ptrPlayer->name, "flanker Matata");//acess through indirection
    ptrPlayer->score = 10000.00;

    printf("\nPlayer: %s\n",player1.name);
    printf("Score: %.0f\n", ptrPlayer->score);

    

}
void processEmp(emp emps)//receives a copy of the structure
{
    emps.id = 123;
    strcpy(emps.name, "Sheila");
    emps.rating = 65000.00;

}

//passing a struct by reference
void processEMP(emp *emps)
{
    emps->id = 123;
    strcpy(emps->name, "Sheila");
    emps->rating = 65000.00;
}
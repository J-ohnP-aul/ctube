#include<stdio.h>
#include<string.h>

typedef struct Student
{
    char name[12];
    float gpa;

}std;
void processStd(std *);
int main()
{   
    struct Student student1 = {"spongebob", 3.0};
    struct Student student2 = {"patrick", 2.5};
    struct Student student3 = {"ssandy", 4.0};
    struct Student student4 = {"squidward", 3.1};
    
    // struct Student studendts[] = {student1, student2, student3, student4};
    std studendts[] = {student1, student2, student3, student4};
    strcpy(studendts[3].name, "cindy");

    for(int i=0; i<sizeof(studendts)/sizeof(studendts[1]); i++)
    {
        printf("%-12s\t",studendts[i].name);//-12 left justify
        printf("%.2f\n",studendts[i].gpa);
    }
    printf("\npassing the array\n\n");
    processStd(studendts);//arrays are pointers themselves they are passed in diferently
    for(int i=0; i<6; i++)
    {
        printf("%-12s\t",student1.name);//-12 left justify
        printf("%.2f\n",studendts[i].gpa);
    }


    return 0;
}
void processStd(std *s){
    strcpy(s[4].name, "Mr crabs");
    s[4].gpa = 6;
    strcpy(s[0].name, "plankton");
    s[0].gpa = 5;

}
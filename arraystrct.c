#include<stdio.h>
#include<string.h>

struct Students
{
    char name[25];
    float gpa;

};
int main()
{   
    struct Students student1 = {"spongebob", 3.0};
    struct Students student2 = {"patrick", 2.5};
    struct Students student3 = {"ssandy", 4.0};
    struct Students student4 = {"squidward", 3.1};

    struct Students studendts[] = {student1, student2, student3, student4};

    for(int i=0; i<sizeof(studendts)/sizeof(studendts[1]); i++)
    {
        printf("%-12s\t",studendts[i].name);
        printf("%.2f\n",studendts[i].gpa);
    }

    return 0;
}
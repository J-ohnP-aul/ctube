#include<stdio.h>
#include<string.h>

typedef struct Student
{
    char name[12];
    float gpa;

}std;
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

    return 0;
}
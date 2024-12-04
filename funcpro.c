#include<stdio.h>

void hello(char[], int); //func prototype ensures funcs are called with corect agu,ent

int main()
{
    char name[] = "johny_noble";
    int age = 20;

    hello(name, age);

    return 0;
}
void hello(char name[], int age)
{
    printf("\nhello %s", name);
    printf("\nyou are %d years old", age);
}

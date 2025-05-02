#include<stdio.h>
#include<string.h>

typedef union
{
    char *name;
    char *number;
} phonebk;

typedef struct{
    char *name;
    char *author;
} magazine;

int main()
{
    phonebk aphoneBk;
    magazine amagazine;
    
    printf("union details");
    printf("\nadress of p-name: %p",&aphoneBk.name);
    printf("\nadress of p-num: %p", &aphoneBk.number);

    printf("\nstruct details");
    printf("\nadress of m-name: %p", &amagazine.name);
    printf("\nadress of m-author: %p", &amagazine.author);
}

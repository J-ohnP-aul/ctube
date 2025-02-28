#include<stdio.h>

int main ()
{
    FILE *pF = fopen("/home/noble/Desktop/test.txt", "w");

    fprintf(pF, "\nwelcome to the club");

    fclose(pF);

    // if(remove("test.txt") == 0)
    // {
    //     printf("That file as deleted succesfully");
    // }
    // else
    // {
    //     printf("That file was not deleted");
    // }

    return 0;
}
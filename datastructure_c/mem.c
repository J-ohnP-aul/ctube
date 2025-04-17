#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main() 
{
    
    char *name;
    name = (char *) malloc(80 *sizeof(char));
    
    if(name != NULL){
        printf("\nebter your name: ");
        if(fgets(name, sizeof(name), stdin) != NULL){
            printf("\nHello %s", name);            
        size_t len = strlen(name);
        if(len > 0 && name[len -1] == '\n')
            name[len-1] = '\0';
            printf("\nnew line removed %s", name);
        }else
            printf("\n error reading the input files");
        free(name);
    }else
        printf("error in allocating memory");
    

    //memory segments

    int *numbers;
    int x;
    numbers = (int*) malloc(5 * sizeof(int));
    // if(numbers == NULL)
    //     return;
    numbers[0] = 100;
    numbers[1] = 200;
    numbers[2] = 300;
    numbers[3] = 400;
    numbers[4] = 500;

    printf("\n individual memory segment initialized to: ");
    for(x=0; x<5; x++)
        printf("\nnumbers[%d] = %d",x ,numbers[x]);
    
    int *digits;
    digits = (int *) calloc(10, sizeof(int));
    

            
}














    // int x;
    // float y;
    // char ch, *name;
    // double dl;
    
        // typedef struct {
        //     int id;
        //     char *name;
        //     float salary;
        // } e;
    
        // printf("\nSize of integer: %d bytes\n", sizeof(x));
        // printf("Size of float: %d bytes\n", sizeof(y));
        // printf("Size of double %d bytes\n", sizeof(dl));
        // printf("Size of char %d byte\n", sizeof(ch));
        // printf("Size of employee structure: %d bytes\n", sizeof(e));
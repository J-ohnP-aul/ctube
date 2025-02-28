#include<stdio.h>
#include<string.h>

int main()
{
    char inpt[25];
    FILE *Fpointer;
    Fpointer = fopen("file.txt","r");//md specified in db qts
    //working with binary specify b "rb"
    //"r+" readding and writing
    // "w+"
    // "a+" craete open for apppend
    if (Fpointer == NULL)
    {
        printf("unable to open");
    }else{
        fscanf(Fpointer,"%s",inpt);//scanf takes fptr date type var to sstore reteived data

        // while (!feof(Fpointer))
        // {
            printf("%s",inpt);
         
        // }
        
        
        fclose(Fpointer);   
    }

    
    return 0;
}
#include <stdio.h>

int main()
{
    FILE *pF = fopen("book.txt", "r");
    char tittle[255];
    char auther[255];

    if(pF == NULL){
        printf("unable to open the file\n");
    }else{
        // while(fgets(tittle, 255, pF) != NULL)        
        
            printf("\n Auther     tittle\n\n");
            fscanf(pF, "%s\t%s", tittle,auther);   

            int i=0;
            while( !feof(pF)){
                i++;
                printf("%d. %s\t \t%s\n",i,tittle, auther);
                fscanf(pF, "%s%s", tittle, auther); 
            }
        
    }

    
    
    fclose(pF);

    return 0;
}
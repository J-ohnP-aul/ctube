#include<stdio.h>
#include<string.h>
//change dttpyes from int to char
void sort( char array[], int size)
{
    for(int i=0; i<size-1; i++)
    {
        for(int j=0; j<size-i-1; j++)
        {
            int temp = (array[j]<array[j + 1])?array[j]:array[j+1];
            // if(array[j]<array[j + 1])
            // {
            //     temp = array[j];
            //     array[j] = array[j+1];
            //     array[j+1] = temp;
            // }
        }
    }
}
void printArray(char array[], int size)
{
    for(int i = 0; i<size; i++)
    {
        printf("%c ", array[i]);
    }

}

int main ()
{
    // int array[] = {22,43,65,78,112,34,4,5,75,13,11};
    char array[] = {'A', 'B', 'C', 'X', 'T', 'Z'};
    int size = sizeof(array)/sizeof(array[0]);
    
    sort(array,size);
    printArray(array, size);

    return 0;
}


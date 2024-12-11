#include<stdio.h>
#include<string.h>

void sort(int array[], int size){
    for(int i=0; i < size - 1; i++)
    {
        for(int j=0; j < size - 1; j++)
        {
            if(array[j] > array[j + 1])
            {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }    
    }

}
void printAray(int array[], int size){
    for(int i=0; i<size; i++)
    {
        printf("%d", array[i]);
    }
}


int main()
{
    
    //sorting arary elms

     int array[] = {2,3,7,9,5,8,4};
     int size = sizeof(array)/sizeof(array[0]);

    sort(array, size);
    printAray(array, size);

    return 0;
}
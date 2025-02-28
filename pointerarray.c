#include<stdio.h>
 int main()
 {  
    int iarray[]  = {1,2,3,4,5};
    int *iPtr = iarray;

    printf("adress of pointer: %p\n", iPtr);
    printf("FiRst adress of array: %p\n", iarray);
    printf("Pointer points to: %d\n",*iPtr);
    printf("First element of array contains: %d\n", iarray[0]);
    
    return 0;
 }
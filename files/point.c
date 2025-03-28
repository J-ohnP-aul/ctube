#include<stdio.h>
int main(){

    int i = 3;
    //     // printf("\nthe value of i = %d", i);
    //     printf("\nthe value of i = %d", *(&i));
//     return 0;
    // int a=100, b=200, c=300;
    // printf("The adress :%x contain value: %i\n",&a, a);
    // int *j = NULL;
    // j=&i;
    // printf("\nthe adress of i = %u",&i);
    // printf("\nthe adress of i = %u",j);
    // printf("\nthe adress of j = %u",&j);
    // printf("\nthe value of j = %d", j);
    // printf("\nthe value of i = %d",*(&i));
    // printf("\nthe value of i  = %d",*j);


    int *iptr, var1, var2;
    iptr = &var1;
    *iptr = 25;
    *iptr += 10;
    printf("\nvar1 contained in: %i",var1);

    var2 = *iptr;
    printf("\nvar2 contained in: %i",var2);
    
    iptr = &var2;
    *iptr += 20;

    printf("\nvar2 contained in: %i",var2);


    return 0;

}
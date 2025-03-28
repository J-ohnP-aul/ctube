#include<stdio.h>

void swap(float *, float *);

int main()
{
    float num1, num2;
    printf("enter two numbers :");
    scanf("%f %f", &num1, &num2);
     
    printf("content in nu1: %.1f",num1);
    printf("\ncontent in nu1: %f",num2);

    swap(&num1, &num2);
    printf("\nafter swapping ....\n");

    printf("\ncontent in nu1: %f",num1);
    printf("\ncontent in nu1: %f",num2);



    return 0;
}
void swap(float *n1, float *n2){
    float temp;
    temp = *n1;
    *n1 = *n2;
    *n2 = temp;
 
}
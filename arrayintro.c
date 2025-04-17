#include<stdio.h>
int main()
{
    double prices[9] = {2.3, 6.6, 23, 22, 55,};

    prices[6] = 77;
    prices[7]= 13;
    // prices[8] = 35;
    prices[5] = 77;

    for(int i = 0; i < sizeof(prices)/sizeof(double); i++)
    {
        printf("$%.2f\n", prices[i]);

    }

    // printf("%d", sizeof(prices));
    return 0;
}
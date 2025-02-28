#include<stdio.h>

int main()
{
    // btiwise = special operators used in bit level programming
    // & and  | or  << left shift >> right shift ^ XOR

    int x = 6; // 6 =  00000110
    int y = 12; //12 = 00001100
    int z = 0; // z =  00000000

    z = x & y;
    printf("AND = %d\n", z);

    z = x | y;
    printf("OR = %d\n", z);

    z = x ^ y;
    printf("XOR = %d\n", z);
    
    z = x << 2;
    printf("SHIFTLEFT = %d\n", z);

    z = x >> 2;
    printf("SHIFTRIGHT = %d\n", z);

    return 1;
}
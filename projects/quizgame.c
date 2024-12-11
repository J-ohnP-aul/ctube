#include<stdio.h>
#include<string.h>
#include<time.h>
#include<stdlib.h>

#define Type(x)_Generic((x),int: "int",char: "char")

int main ()
{   int x;
    printf("%s\n",Type(x));
    return 0;
}
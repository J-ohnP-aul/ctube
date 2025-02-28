#include<stdio.h>
#include<string.h>

int main()
{
    char cars[][10] = {"mustang", "corvet", "camero"};

    // cars[0] = "tesla"; IN strings array u cant directly assign a value
    strcpy(cars[2], "tesla");

    for(int i = 0; i<sizeof(cars)/sizeof(cars[0]); i++)
    {
        printf("%s\n", cars[i]);
    }


    return 0;
}
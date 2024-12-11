#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    //psudo random numbers = a set of values or elm that are statistically random 
        // !!(donot use this for any sort of cryptographic securty)

    srand(time(0));

    //rand gives a no btw 0 - 32767 u can limit the max no using  % egg for a dice %6 + 1 (0 -5)
    int number1 = (rand() % 6) + 1;
    int number2 = (rand() % 6) + 1;
    int number3 = (rand() % 6) + 1;
    
    printf("%d \n",number1);
    printf("%d \n",number2);
    printf("%d \n",number3);

    return 0;
}
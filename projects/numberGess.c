#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define Type(x)_Generic((x),int: "int",char: "char")


int main ()
{
    const int MIN = 1;
    const int MAX = 100;
    int guess;
    int guesses = 0;
    int answer;

    srand(time(0));

    answer = (rand() % MAX) + MIN;
    // printf("%d",answer);

    do{
        printf("\nEnter a guess: ");
        scanf("%d", &guess);
        if(guess > answer)
        {
            printf("Too high sorry");
        }
        else if(guess < answer)
        {
            printf("too low man");
        }
        else{
            printf("CORRECT !!\n");
        }
        guesses++;
    }while(guess != answer);

    printf("************************\n");
    printf("answer: %d\n", answer);
    printf("guesses: %d\n", guesses);
    printf("************************");


    return 0;
}
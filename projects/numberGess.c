#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>

#define Type(x)_Generic((x),int: "int",char[2]: "char")


int main ()
{
    const int MIN = 1;
    const int MAX = 100;
    int guess;
    int guesses = 0;
    int answer;
    char iq;
    char iq1[] = "lower";
    char iq2[] = "middle";
    char iq3[] = "high";

    srand(time(0));

    answer = (rand() % MAX) + MIN;
    // printf("%d",answer);

    while(guess != answer){
        printf("\nEnter a guess: ");
        scanf("%d", &guess);
        // if(Type(guess) == "char"){
        //     printf("!!***!!!***WRONG INPUT***!!!**!!")
        // }else{
            guess = (int)guess;
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
    };

    if(guesses < 20){        
        printf("************************\n");
        printf("answer: %d\nYour iq level is a little bit: %s\n", answer, iq3);
        printf("guesses: %d\n", guesses);
        printf("************************");
    }else if (guesses > 20 && guesses < 30)
    {
        printf("************************\n");
        printf("answer: %d\nYour iq level is in the %s\n", answer, iq2);
        printf("guesses: %d\n", guesses);
        printf("************************");
    }else{
        printf("************************\n");
        printf("answer: %d\nYour iq level is alittle bit: %s\n", answer, iq1);
        printf("guesses: %d\n", guesses);
        printf("************************");
    }


    

    return 0;
}
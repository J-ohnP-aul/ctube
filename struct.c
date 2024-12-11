#include<stdio.h>
#include<string.h>


struct player 
{
    char name[12];
    int score;
};


int main()
{
    //struct = colection of related members(var) can be of dif dtypes ,slisted under mem similar to clases but no methods
    
    struct player player1;
    struct player player2;

    strcpy(player1.name, "johnPaul");
    strcpy(player2.name, "nobles");


    player1.score = 4;
    player2.score = 5;

    printf("%s\n%s\n",player1.name,player2.name);

    printf("%d\n%d",player1.score, player2.score);
    return 0;
}
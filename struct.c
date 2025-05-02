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
    struct player player3 = {"okoth", 12};//method 2 of initializing a struct instance
    char *name;
    printf("enter name: ");
    scanf("%s",name);

    strcpy(player1.name, name);
    strcpy(player2.name, "nobles");


    player1.score = 4;
    player2.score = 5;

    printf("%s  %s\n",player1.name,player2.name);

    printf("%d  %d",player1.score, player2.score);
    printf("\n%s  %d",player3.name, player3.score);

    return 0;
}
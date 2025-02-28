#include<stdio.h>
#include<string.h>

// typedef char user[25];
// struct user           --normal way
// {
//     char name[25];
//     char password[12];
//     int id;
// };

typedef struct 
{
    char name[25];
    char password[12];
    int id;
} user;

int main()
{
    //typedef = reserverd keyword thatgives an existing data type a "nickname"
    
    // user user1 = "noble";
    // struct user user1 = {"noble", "nasa", 23065775}; --normal way

    user user1 = {"noble", "nasa", 23065775};
    user user2 = {"engPJ", "codex", 4654545};

    printf("name: %s pass: %s idNo:%d \n",user1.name, user1.password, user1.id);
    printf("name: %s pass: %s idNo:%d",user2.name, user2.password, user2.id);



    return 0;
}
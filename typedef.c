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

typedef struct{
    char name[20];
    int id;
    float salary;
} emp;

int main()
{
    //typedef = reserverd keyword thatgives an existing data type a "nickname"
    
    // user user1 = "noble";
    // struct user user1 = {"noble", "nasa", 23065775}; --normal way

    user user1 = {"noble", "nasa", 23065775};
    user user2 = {"engPJ", "codex", 4654545};

    printf("name: %s pass: %s idNo:%d \n",user1.name, user1.password, user1.id);
    printf("name: %s pass: %s idNo:%d",user2.name, user2.password, user2.id);

// the type def from doc
    emp emp1 = {"vector", 777, 30000.0};
    printf("\nName: %s",emp1.name);
    printf("\nidNumber: %d",emp1.id);
    printf("\nsalary: %.2f",emp1.salary);

    return 0;
}
#include<stdio.h>

void printAge(int *pAge){
    printf("you are %d years old\n",*pAge ); //derefernce
}

int main () 
{
    // pointer - avariable like reference that holds a mem adress to another variable, array etc

    int age =21;
    int *pAge = NULL;
    pAge = &age;
    int xage;
    xage = *pAge; //the var will contain the pointer value;
    // *pAge = 12; //this indirectly changes the value of the original integer

    // printf("adress of age: %p\n", &age);
    // printf("value of Page: %p\n", pAge);


    printf("value of age: %p\n", &age);
    printf("vlaue at stored adress; %p\n", pAge); //dereferencing and must include aesteric ifront of the pointer name

    // printf("size of age: %dbytes\n", sizeof(age));
    // printf("size of age: %d bytes\n",sizeof(pAge));

    // printAge(pAge);

    // int x = 0;
    // int iAge = 30;
    // int *ptrAge;
    // ptrAge = &iAge;
    // x = *ptrAge;

    // printf("memory adress: %p, int vlaue : %d",ptrAge, iAge );

    return 0;
}
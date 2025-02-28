#include<stdio.h>
#include<string.h>

//enum Day{Sun, Mon , Tue , Wed , Thu , Fri, Sat};//sun =0, mon =1 default asign int
enum Day{Sun = 1, Mon = 2, Tue = 3, Wed = 4, Thu = 5, Fri= 6, Sat = 7};


int main ()
{
    //enum = a user defined type of named integer identifiers help to make a programm more redable;
    //can b dclared nside or out of miain func NB they are consts
    
    enum Day today = Sat;

    // printf("%d", today); enums are not strings but can be treated as integers

    //  if(today == 0 || today == 6){
    if(today == Sun || today == Sat){
        printf("Wikendi moja clean ");
    }
    else
    {
        printf("Weekday chop sasa First class moja clean");
        
    }

    return 0;
}
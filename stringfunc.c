#include<stdio.h>
#include<string.h>

int main()
{
    char strg1[] = "noble";
    char strng2[] = "paul";
    strupr(strg1);

    //strings are declared using double quotes while char single quotes
    
    //strlwr() to lowercase
    //strupr() to upper case
   // strcat(strg1, strng2);// combines strings 
    // strncat(strg1, strng2, 2); //ombines string u can add amount of char to combine
    //strcpy(strg1, strng2);//copy strng2 to strng1
    // strncpy(strg1, strng2, 2);//copy n char from str2 to str1
    // strset(strg1, "!"); //sets all str1 charr to |1|
    // strnset(strg1, "!", 2); //sets first n char of strn1 to the given char
    // strrev(strg1); //reverse strng
    printf("%s", strg1 );
}
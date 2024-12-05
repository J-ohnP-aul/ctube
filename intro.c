#include<stdio.h>
//#include<stdbool.h> to work with boolean
#include<math.h>
#include<string.h>

// void birthday(char x[], int y){
//     printf("\nHappy birthday to you!");
//     printf("\nHow old are you now %d", y);
//     printf("\nHappy birthday dear %s", x);
//     printf("\nHappy birthday to you!");
// }
int main(){
    // printf("Ilove coding \n");
    // printf("I am disciplene\n");
    // printf("1\t2\t3\t\n4\t5\t6\t\n7\t8\t9");

    // int x; //declaration of var
    // x = 12307; //initialization
    // int y = 321; //declaration and initialization

    // int age = 19; //integer
    // float weight = 66.7; //float
    // char grade = 'B'; //character
    // char name[] = "Noble programmers"; //to emulate strings many char in an array
    // double pi = 3.14233535366; //more acurate than floats fomat S %lf uses 8bytes
    // bool dcpln = false; //import stdbool otuput 1 true 0 false 
    // char f = 100; //int -127 - 127 oupt  decimal int char(using asciitable)
    // unsigned char C = 255; //0-255 %d or %c

    // // printf("\n hello %s",name);
    // // printf("\n your avarage grade is %c",grade);
    // // printf("\n you  are %i  years old",age);
    // // printf("\n last your wieght was %f maintain discipline in the gym eighty is the target",weight);
    // // printf("\n %d",dcpln);

    // short int h = 32767; // 2bytes -32768 - +ve 32768
    // unsigned short int H = 65535; //2btye 
    
    // printf("%d",h);
    // printf("%d",H);

    // float item1 = 5.75;
    // float item2 = 10.06;
    // float item3 = 100.99;

    // printf("item1: $%-8.2f\n", item1);
    // printf("item1: $%-8.2f\n", item2);
    // printf("item1: $%8.2f\n", item3);//decimal specifier and space bafter %

    //constant
    // const float PI = 3.1459;
    // printf("%.3f",PI);

    // int x = 5;
    // int y = 2;

    // float z = x / (float)y; //to convert an extng dttype

    // printf("%.2f",z);
    // char name[25];
    // printf("whats ur name pal ");
    // //scanf("%s", &name); can not read white space
    // fgets(name, 25, stdin);//var name inpt size , stdin

    // printf("hello %s \n", name);


    // int adm;
    // printf("we n mzee uko na iaka  how ? \n");
    // scanf("%d", &adm);

    // printf("you are: %d years old", adm);


    // double A = sqrt(9);
    // double B = pow(2, 4);//power no, p
    // int R = round(3.144);//rounding off
    // int D = ceil(3.144);//round a number up
    // int E = floor(3.99);//round down
    // double F = fabs(-100);//finds  absolute valuo
    // //cos, log ,tan

    // printf("%f\n",A);
    // printf("%f\n",B);
    /// printf("%d\n",R);
    // logical op &&-takes moer ond nit fst 2 || !=
    // if (temp==22 && temp>12) 
    // sunny = true !sunny = false
    
    //function
// declared outside the int main
    // char name[] = "johnPaul";
    // int age = 20;

    // birthday(name, age);
    //nested loop//
    // int rows,columns;
    // char symbol;
    // printf("enter number of raws, column and symbol respectivly\n ");
    // scanf("%i %d %c",&rows,&columns,&symbol);

    // for(int i = 1; i<=rows; i++){
    //     for(int j=1; j<=columns; j++){
    //         printf("%c",symbol);
    //     }
    //     printf("\n");
    // }
    //continue = skip the rest section and force nxt iteration
    //break = exit out of loop entirely

            // for(int i = 1;i<=20;i++){
            //     if(i==13){
            //         continue;
            //     }
            //     printf("%d\n",i);
            // }
            //     for(int i = 1;i<=20;i++){
            //     if(i==13){
            //         break;
            //     }
            //     printf("%d\n",i);
            // }
    // array - homo genious data structure
    // double prices[] = {5.0, 10.3, 23.3, 11.5};//if u know the number of ch else

        // double prices[5];
        // prices[0] =12.2;
        // prices[1] =13.4;
        // prices[2] =21.5;
        // prices[3] =16.74;
        // prices[4] =19.33;
        
        // printf("$%.2lf", prices[1]);//access ing value
//looping ana array
    // double prices[] = {5.0, 10.3, 23.3, 11.5, 11.3, 32.6};
    // //printf("%d bytes\n",sizeof(prices));

    // for(int i=0; i<sizeof(prices)/sizeof(prices[0]); i++){
    //     printf("\n$%.2lf", prices[i]);
    // }

//   //2D array
//in 2d one must incliude max size of elm
    // int numbers[2][3] = {
    //     {1, 2, 3},
    //     {4, 5, 6}
    //     };

    // int number[3][3];

    // number[0][0] = 1;
    // number[0][1] = 2;
    // number[0][2] = 3;
    // number[1][0] = 4;
    // number[1][1] = 5;
    // number[1][2] = 6;
    // number[1][0] = 7;
    // number[1][1] = 8;
    // number[1][2] = 9;

    // int rows = sizeof(number)/sizeof(number[0]);
    // int columns = sizeof(number[0])/sizeof(number[0][0]);
    // printf("rows: %d\n columns: %d",rows,columns);
    // for (int i=0; i<rows; i++){
    //     for(int j=0; j<columns; j++){
    //         printf("%d", number[i][j]);
    //     }
    //     printf("\n");
    // }

// //array of strings
//     char cars[][10] = {"Mustang","mercedes","BMW"};//strings are arrays

//     strcpy(cars[0], "Tesla");//to update or edit one item

//     for(int i = 0; i< sizeof(cars)/sizeof(cars[0]); i++){
//         printf("%s\n", cars[i]);
//     }
    
// swapping variables

    char x = 'X';
    char y = 'Y';
    char temp;

    temp = x;
    x = y;
    y = temp;

    printf("x = %c \n",x);
    printf("y = %c \n",y);

    return 0;
}

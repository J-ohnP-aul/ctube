#include<stdio.h>

int findMax(int x, int y)
{
//     if(x>y){
//         return x;
//     }else{
//         return y;
//     }

    return (x > y) ? x : y;
}

int main ()
{
    //(condition) ?value if true : value if false 
    int max  = findMax(3, 4);
    printf("%d", max);

}
#include<stdio.h>

int main()
{
    // memory = ana rray of bytes in ram (street)
    // mom block - a single unit byte within memory used to hold a some value(person)
    // momry adrss =adres where a memory block is located (house adress )


    int az; // 1byte
    char b[3]; // 3bytes can change based on data type

    printf("%d bytes\n", sizeof(a));
    printf("%d bytes\n", sizeof(b));
    // printf("%d bytes\n", sizeof(c));
    

    printf("%p\n", &a);
    printf("%p\n", &b);
    // printf("%p\n", &c);

    return 0;

}
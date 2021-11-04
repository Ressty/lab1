
#include <stdio.h>
#include <conio.h>

int main()
{
    
    int a = 0;
    int b = 5;

    int a1 = a;
    int b1 = b;
        --b1;
        a1 = b1 / 2;
    printf("A %d \n", a1);
    int a2 = a;
    int b2 = b;
    a2 = --b2 / 2;
    printf("B %d \n", a2);
    int a3 = a;
    int b3 = b;
        b3 -= 1;
        a3 = b % 2;
    printf("C %d \n", a3);  
    int a4 = a;
    int b4 = b;
        a4 = b4-- / 2;
    printf("D %d \n", a4);
    int a5 = a;
    int b5 = b;
        a5 = b5 -= 1 / 2;
    printf("E %d \n", a5); 
    int a6 = a;
    int b6 = b;
        a6 = (b6= b6 - 1) / 2;
    printf("F %d \n", a6);
    int a7 = a;
    int b7 = b;
        a7 = (b7 -= 1) / 2;
    printf("G %d \n", a7);
    int a8 = a;
    int b8 = b;
    a8 = (b8 -= 1)/2.0;
    printf("H %d \n", a8);
}


#include <stdio.h>
#include <conio.h>

int main()
{
    int a = 0;
    int c = 5;
    
    int c1 = c;
    int a1 = a;
        c1++;
        a1 = 2 * c1;
    printf("A %d \n", a1);    
    int c2 = c;
    int a2 = a;
        a2 = 2 * c2++; 
    printf("B %d \n", a2);
    int c3 = c;
    int a3 = a;
        c3 += 1;
        a3 = c3 + c3; 
    printf("C %d \n", a3);
    int c4 = c;
    int a4 = a;
        a4 = c4++ + c4;
    printf("D %d \n", a4);
    int c5 = c;
    int a5 = a;
    ++c5;
    a5 = c5 + c5; 
    printf("E %d \n", a5);
    int c6 = c;
    int a6 = a;
        a6 = ++c6 + c6;
    printf("F %d \n", a6);
    int c7 = c;
    int a7 = a;
    a7 = c7 += 1 + c7;
    printf("G %d \n", a7);  
    int c8 = c;
    int a8 = a;
    a8 = (c8 += 1) + c8;
    printf("H %d \n", a8);

}
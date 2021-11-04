#include <stdio.h>
#include <conio.h>

 
int main()
{
    int a,b,c;

    a=2;
    b=6;
    c=3;


    int a1 = a;
    int b1 = b;
    int c1 = c;
    - - - a1;
    printf("a=%d,b=%d,c=%d\n",a1,b1,c1);

    int a2 = a;
    int b2 = b;
    int c2 = c;
    b2-- - a2;
    printf("a=%d,b=%d,c=%d\n",a2,b2,c2);

    int a3 = a;
    int b3 = b;
    int c3 = c;
    a3+= a3 ++;
    printf("a=%d,b=%d,c=%d\n",a3,b3,c3);

    int a4 = a;
    int b4 = b;
    int c4 = c;
    ++ b4/a4 ++ * --c4;
    printf("a=%d,b=%d,c=%d\n",a4,b4,c4);

    int a5 = a;
    int b5 = b;
    int c5 = c;
    a5 --- b5;
    printf("a=%d,b=%d,c=%d\n",a5,b5,c5);

    int a6 = a;
    int b6 = b;
    int c6 = c;
    - a6-- -b6;
    printf("a=%d,b=%d,c=%d\n",a6,b6,c6);

    int a7 = a;
    int b7 = b;
    int c7 = c;
    a7 = a7 ++;
    printf("a=%d,b=%d,c=%d\n",a7,b7,c7);

    int a8 = a;
    int b8 = b;
    int c8 = c;
    b8++ / ++a8 * c8 --;
    printf("a=%d,b=%d,c=%d\n",a8,b8,c8);

    int a9 = a;
    int b9 = b;
    int c9 = c;
    - --a9;
    printf("a=%d,b=%d,c=%d\n",a9,b9,c9);

    int a10 = a;
    int b10 = b;
    int c10 = c;
    a10- --c10;
    printf("a=%d,b=%d,c=%d\n",a10,b10,c10);

}
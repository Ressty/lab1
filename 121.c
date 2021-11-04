#include <stdio.h>
#include <conio.h>

int main()
{
    int a1 = '0'; 
    printf("%d - format number\n", a1); 
    int a2 = 00123; 
    printf("%d - format number\n", a2); 
    //int a = 'a'U; 
    // printf("%d - format number", a); does't works
    int a3 = 1E6; 
    printf("%d - format number\n", a3); 
    //int a = 058; 
    //printf("%d - format number", a); недопустимое восмеричное число  
    int a4 = 0xffffffL; 
    printf("%d - format number\n", a4); 
    int a5 = 0731UL; 
    printf("%d - format number\n", a5); 
    int a6 = 123456789LU; 
    printf("%d - format number\n", a6); 
    int a7 = '\x7'; 
    printf("%d - format number\n", a7); 
    //int a = 01A; 
    //printf("%d - format number", a); does't works
    int a8 = '\n'; 
    printf("%d - format number\n", a8); 
    int a9 = -5; 
    printf("%d - format number\n", a9); 
    //int a = 0X-1AD; 
    //printf("%d - format number", a); does't 
    int a10 = -'x'; 
    printf("%d - format number\n", a10); 
    int a11 = +0xaf; 
    printf("%d - format number\n", a11);  
    int a12 = 0XFUL; 
    printf("%d - format number\n", a12); 
    int a13 = '\122'; 
    printf("%d - format number\n", a13); 
    //int a14 = "x"; 
    //printf("%d - format number", a14); // does't 
    int a15 = 0X0; 
    printf("%d - format number\n", a15);
    
}




#include <stdio.h>
#include <conio.h>

int main()
{
    int a;
    int a1; 
    int a2;
    int a3;
    int n;
    int n1;

    printf("Enter A: ");
    scanf("%d",&a);          
    a3=(a % 10)*100;
    a2=(a / 10 % 10)*10;
    a1=a / 100;
    //b1 = a3*100;
    n = ((a % 10)*100)+((a / 10 % 10)*10)+(a / 100);
    n1= a3 + a2 + a1;
    printf("a3=%d, a2=%d, a1=%d",a3,a2,a1);
    printf(" n = %d",n);
    printf(" n1 = %d",n1);

}
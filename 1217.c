#include <stdio.h>
#include <conio.h>


int main()
{
    int x, k;
    printf("Enter the positive x: ");
    scanf("%d", &x);
    if(x < 100)
    {
        printf("the x is two - digit or three - digit. Try again\n");
    } 
    else
    {
        k = x / 10 /  10 % 10;
        printf("k = %d\n", k);
    }    
}
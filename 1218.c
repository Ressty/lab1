#include <stdio.h>
#include <conio.h>



 
int main()
{
    int x, s=0;
    printf ("Enter the number");
    scanf("%d", &x);;
    if (x<1000){
    while (x!=0) {
        s=s+(x % 10);
        x=x / 10;
    }
    printf ( "s = %d", s);
    }
    else{
        printf("Enter the normal number, pls");
    }
}
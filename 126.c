
#include <stdio.h>
#include <conio.h>

 
int main()
{
   
    int E1=1;
    int E2=2;

    E1 += E2;
    printf("E1 = %d\n", E1);

    E1=1;

    E1 = E1 + E2;
    printf("E1 = %d\n", E1);

    E1=1;

    E1 = E1 + (E2);
    printf("E1 = %d", E1);



    
}
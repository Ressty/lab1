#include <stdio.h>
#include <conio.h>
//cдвиг только до 4, извините, он ругается :с
int main()
{
    int i, j, n, m;
    printf("m = "); 
    scanf("%d", &m);
    int mas[15];
    int mas2[15];
    printf("Mas:\n");
    for(i = 0; i < m; i++)
    {
        mas[i] = i;
         printf(" %d",mas[i]); 
         mas2[i] = 0;
    }
    printf("\nLeft ( < %d): ", m); 
    scanf("%d", &n);
    for(i = 0; i < m; i++) 

    if (i<=n)
    mas2[i]=mas[i+n];
    else
    mas2[i]=mas[i-n-1];

    printf("Mas:\n");
    for(i = 0; i < m; i++) 
    printf(" %d",mas2[i]);
    printf("\n");   

}
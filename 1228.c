#include <stdio.h>
#include <conio.h>

int main()
{
    int i, j, n, m;
    printf("m = "); 
    scanf("%d", &m);
    int mas[10];
    int mas2[10];
    printf("Mas:\n");
    for(i = 0; i < m; i++)
    {
        mas[i] = i;
        printf(" %d",mas[i]); 
        mas2[i] = 0;
    }
    printf("\nRight ( < %d): ", m); 
    scanf("%d", &n);
    for(i = 0; i < m; i++) 
    if(i+n < m) 
    mas2[i+n] = mas[i];
    else 
    mas2[i+n-m] = mas[i];
    printf("Mas:\n");
    for(i = 0; i < m; i++) 
    printf(" %d",mas2[i]);
    printf("\n");   
    
//n - сдвиг
}
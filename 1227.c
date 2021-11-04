#include <stdio.h>
#include <conio.h>
#include <math.h>
int getVarSize(int);

int main() 
{
    int x = 233;
    int y = 129;
    int n = 3;
    int p = 3;

    // printf("Enter x: ");
    // scanf("%d", &x);

    // printf("Enter y: ");
    // scanf("%d", &y);
    
    // printf("Enter n: ");
    // scanf("%d", &n);

    // printf("Enter p: ");
    // scanf("%d", &p);

    int xSize = getVarSize(x);
    int ySize = getVarSize(y);
    
    if (xSize < p) {
        printf("p is very big");
        return 1;
    } else if (ySize < n) {
        printf("n is very big");
        return 1;
    } else if (xSize - p < n) {
        printf("Not enough size of x value");
        return 1;
    }

    int temp = x >> (xSize - p);
    printf("Temp new: %d\n", temp);
    int oneBit;

    for (int i = n; i > 0; i--) {
        oneBit = (y & (1 << (ySize - i))) >> (ySize - i);
        temp = (temp <<= 1) | oneBit;
        printf("Temp: %d\n", temp);
        printf("bit: %d\n", oneBit);
    }

    temp <<= xSize - (p + n);
    temp |= x & (int) pow(2, xSize - (p + n)) - 1;

    printf("\nResult: %d", temp);

} 
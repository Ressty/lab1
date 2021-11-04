#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
    int x16=3;
	int s16=0;
	s16 = 2 * pow(x16, 4) - 3*pow(x16,3) + 4*pow(x16,2)-(5*x16) + 6;
	printf("s = %d \n", s16);
	s16 = 0;
	s16 = 2 * (x16 * x16 * x16 * x16) - 3 * (x16 * x16 * x16) + 4 * (x16 * x16) - (5 * x16) + 6;
	printf("s = %d \n", s16);
}
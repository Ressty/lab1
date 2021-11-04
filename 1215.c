#include <stdio.h>
#include <conio.h>


int main()
{
    double d15 = 3.2, x15; int i15 = 2, y15;

	x15 = (y15 = d15 / i15) * 2; 
	printf("x = %f ;y = %d\n", x15, y15);

	x15 = (y15 = d15 / i15) * 2; 
	printf("x = %d ;y = %f\n", x15, y15);

	y15 = (x15 = d15 / i15) * 2; 
	printf("x = %f ;y = %d\n", x15, y15);

	y15 = d15 * (x15 = 2.5 / d15); 
	printf("x = %f; y = %d\n", x15, y15);

	x15 = d15 * (y15 = ((int)2.9 + 1.1) / d15); 
	printf("x = %d y = %f\n", x15, y15);

}
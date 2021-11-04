#include <stdio.h>
#include <conio.h>

int main()
{
    int a = 1; //a
	int b = 2; //b
	int c = 3; //c
	int d = 4; //d
	int s = 0; 
	int s1 = 0;

	//!(a > b);
	if (!(a > b)) {
		s = a + b;
		printf("s = %d   ", s);
	}
	if (a < b) {
		s1 = a + b;
		printf("s = %d \n", s1);
	}
	if (s == s1); {
		printf("expressions are equivalent\n");
		printf("\n");
	}

	if(s!=s1)
	{
		printf("expressions are not equivalent\n");
	}

	//!(2 * a == b + 4);
	if (!(2*a == b+4)) {
		s = a + b;
		printf("s = %d   ", s);
	}
	if ((2*a < b+4) || (2 * a > b + 4)) {
		s1 = a + b;
		printf("s = %d \n", s1);
	}
	if (s == s1); {
		printf("expressions are equivalent\n");
		printf("\n");
	}
	if (s != s1)
	{
		printf("expressions are not equivalent\n");
	}
	//!(a < b&& c < d);
	if (!(a < b && c < d)) {
		s = a + b;
		printf("s = %d   ", s);
	}
	else {
		s = a * b;
		printf("s = %d   ", s);
	}
	if ((a > b || c > d)) {
		s1 = a + b;
		printf("s = %d \n", s1);
	}
	else {
		s1 = a * b; 
		printf("s = %d  \n", s1 );
	}

	if (s == s1); {
		printf("expressions are equivalent\n");
		printf("\n");
	}
	if (s != s1)
	{
		printf("expressions are not equivalent\n");
	}
	//!(a < 2 || a>5);
	if (!(a < 2 || a > 5)) {
		s = a + b;
		printf("s = %d   ", s);
	}
	else {
		s = a * b;
		printf("s = %d   ", s);
	}
	if ((a > 2 && a < 5)) {
		s1 = a + b;
		printf("s = %d \n", s1);
	}
	else {
		s1 = a * b;
		printf("s = %d   \n", s1);
	}
	if (s == s1); {
		printf("expressions are equivalent\n");
		printf("\n");
	}
	if (s != s1)
	{
		printf("expressions are not equivalent\n");
	}

	//!(a < 1 || b < 2 && c < 3);
	if (!(a < 1 || b < 2 && c < 3)) {
		s = a + b;
		printf("s = %d   ", s);
	}
	if (!(a > 1 && b > 2 || c < 3)) {
		s1 = a + b;
		printf("s = %d   \n", s1);
	}

	if (s == s1); {
		printf("expressions are equivalent\n");
		printf("\n");
	}
	if (s != s1)
	{
		printf("expressions are not equivalent\n");
	}
}

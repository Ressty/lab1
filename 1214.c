#include <stdio.h>
#include <conio.h>

int main()
{ 
    double d14; float f14; long lng14; int i14; short s14;
	s14 = i14 = lng14 = f14 = d14 = 100 / 3;
	printf("s = %hd i = %d lng = %ld f = %f d = %f\n", s14, i14, lng14, f14, d14);

	d14 = f14 = lng14 = i14 = s14 = 100 / 3;
	printf("s = %hd i = %d lng = %ld f = %f d = %f\n", s14, i14, lng14, f14, d14);

	s14 = i14 = lng14 = f14 = d14 = 1000000 / 3;
	printf("s = %hd i = %d lng = %ld f = %f d = %f\n", s14, i14, lng14, f14, d14);

	d14 = f14 = lng14 = i14 = s14 = 1000000 / 3;
	printf("s = %hd i = %d lng = %ld f = %f d = %f\n", s14, i14, lng14, f14, d14);

	lng14 = s14 = f14 = i14 = d14 = 100 / 3;
	printf("s = %hd i = %d lng = %ld f = %f d = %f\n", s14, i14, lng14, f14, d14);

	f14 = s14 = d14 = lng14 = i14 = (double)100 / 3;
	printf("s = %hd i = %d lng = %ld f = %f d = %f\n", s14, i14, lng14, f14, d14);

	s14 = i14 = lng14 = f14 = d14 = 100 / (double)3;
	printf("s = %hd i = %d lng = %ld f = %f d = %f\n", s14, i14, lng14, f14, d14);

	f14 = s14 = d14 = lng14 = i14 = (double)100 / 3;
	printf("s = %hd i = %d lng = %ld f = %f d = %f\n", s14, i14, lng14, f14, d14);

	i14 = s14 = lng14 = d14 = f14 = (double)(100 / 3);
	printf("s = %hd i = %d lng = %ld f = %f d = %f\n", s14, i14, lng14, f14, d14);

   
}
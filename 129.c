#include <stdio.h>
#include <conio.h>
#include <stdbool.h>


int main() 
{
    int p = 1;
	if (p) {
		printf("p is true\n");
	}
	if (!p) {
		printf("p is not true\n");
	}
	if (!!p) {
		printf("p is not not true\n");
	}
	if (!!!p) {
		printf("p is not not not true\n");
	}
	//2
	bool t = true;
	int xx = 1;

	if (t == true && xx == 1) {
		printf("x and true = x\n");
	}
	else {
		printf("x and true != x");
	}

	printf("------------------\n");

} 
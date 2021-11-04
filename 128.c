#include <stdio.h>
#include <conio.h>

int main()
{
int i, j, k, m;
char c, d;
i = 1; j = 2; k = -7; m = 0; c = 'w';
d = 'a'+1<c;
printf("%c - format\n", d);
m = 3<j<5;
printf("%d - format\n", m);
m = c !=87;
printf("%d - format\n", m);
m = !c+87;
printf("%d - format\n", m);
//k = = j-9 = = i;
i +=+j+3;
printf("%d - format\n", i);
//1 + 3 * (n+=7)/5; не определен n
m = - i - 5 * j >= k+1;
printf("%d - format\n", m);
m = 3== j < 5;
printf("%d - format\n", m);
m = c = ! 87;
printf("%d - format\n", m);
!m == c + 87;
printf("%d - format\n", !m);
k *= 3 + j;
printf("%d - format\n", k);
//k %= m = 1 + n/2;
c + i < c - 'x'+10;
printf("%c - format\n", c);
i + j++ + k == -2*j;
printf("%d - format\n", i);
//m == c = 'w';
//m = !c = 87;
m != c + 87;
printf("%d - format\n", m);
//i + j = !k;
//1 + 3 * n += 7 / 5;
-k == '0'+9 < 10;
printf("%d - format\n", k);
}

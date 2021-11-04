#include <stdio.h>
#include <conio.h>

int main()
{ 
    int a, b, c, d, e;
    a = 2;
    b = 13;
    c = 7; 
    d = 19; 
    e = -4;

    int ans1 = b/a/c;
    printf("%d - answear 1 \n", ans1);
    int ans2 = b % e;
    printf("%d - answear 2 \n", ans2);
    int ans3 = d / a % c;
    printf("%d - answear 3 \n",ans3);
    int ans4 = 7 - d % +(3 - a);
    printf("%d - answear 4 \n", ans4);
    int ans5 = c % d - e;
    printf("%d - answear 5 \n", ans5);
    int ans6 = b % - e * c;
    printf("%d - answear 6 \n", ans6);
    int ans7 = -e % a + b / a * - 5 + 5;
    printf("%d - answear 7 \n", ans7);
    int ans8 = 9 / c - -20 / d;
    printf("%d - answear 8 \n", ans8);
   
}
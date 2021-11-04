
#include <stdio.h>
#include <conio.h>

int main()
{
    float b1 = 1.71;
    printf("%f - format number \n", b1);
    float b2 = 5.E+2;
    printf("%f - format number \n", b2);
    float b3 = 0X1E6;
    printf("%f - format number \n", b3);
    float b4 = 1e-2f;
    printf("%f - format number \n", b4);
    float b5 = 1E-6;
    printf("%f - format number \n", b5);
    float b6 = 0e0;
    printf("%f - format number \n", b6);
    //float b7 = 0F;
    //printf("%f - format number \n", b7); does't
    float b7 = -12.3E-6;
    printf("%f - format number \n", b7);
    float b8 = 0.314159E1F;
    printf("%f - format number \n", b8);
    //float b9 = 0x1A1.5 ;
    //printf("%f - format number \n", b9); does't
    float b9 = 1234.56789L;
    printf("%f - format number \n", b9);
    float b10 = +10e6;
    printf("%f - format number \n", b10);
    float b11 = .005;
    printf("%f - format number \n", b11);
    float b12 = 05.5;
    printf("%f - format number \n", b12);
    //float b13 = 1.0E-10D;
    //printf("%f - format number \n", b13); does't
    float b13 = 123456L;
    printf("%f - format number \n", b13);
    float b14 = 0051E-04;
    printf("%f - format number \n", b14);
    float b15 = 0;
    printf("%f - format number \n", b15);
    //float b16 = 3.1415U;
    //printf("%f - format number \n", b16); does't
    //float b16 = E-6;
    //printf("%f - format number \n", b16); does't

}
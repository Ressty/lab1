#include <stdio.h>
#include <conio.h>

int main(){

    int hour,min,sec;
    printf("Idet Secunda ");
    scanf("%d", &sec);
    min=sec/60;
    hour=sec/3600;
    printf("Proshlo minut  %d\n", min);
    printf("Proshlo chasov  %d\n", hour);

}
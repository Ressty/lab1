#include <stdio.h>
#include <conio.h>
//25 и 26 номер
int main() {
// Упаковка

    unsigned int stack;
    char array[] = {'a', 'b', 'c', 'd'};

    for (int i = 0; i < 4; i++) {
        stack = stack << 8 | array[i];
    }

    //stack = ((a << 8 | b) << 8 | c) << 8 | d;
    printf("%d\n", stack);

printf("------------------\n");
// Распаковка
    char n;

    for (int i = 0; i < 4; i++) {
        n = stack;
        stack >>= 8;
         printf("n: %c\n", n);
         printf("n (int): %d\n", (int)n);
    }

 }
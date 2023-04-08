#include <stdio.h>
#include <stdlib.h>

void swap (int a, int b);

int main(void)
{
    int x = 1;
    int y = 2;

    printf("X is %i, y is %i\n", x, y);
    swap(x, y);
    printf("X is %i, y is %i\n", x, y);
}

void swap (int a, int b)
{
    printf("a is %i, b is %i\n", a, b);
    int tmp = a;
    a = b;
    b = tmp;
    printf("a is %i, b is %i\n", a, b);
}
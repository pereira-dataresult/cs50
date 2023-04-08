#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char *s = malloc(4);
    printf("S: ");
    scanf("%s", s);
    printf("S: %s\n", s);
}
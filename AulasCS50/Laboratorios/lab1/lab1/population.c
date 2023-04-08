#include <stdio.h>
#include <math.h>
#include <cs50.h>

int main(void)
{
    long startSize;
    long endSize;

    do
    {
        startSize = get_long("Start size: ");
    }
    while(startSize < 9);

    do
    {
        endSize = get_long("End size: ");
    }
    while(endSize < startSize);

    if(endSize != startSize)
    {
        long population = startSize;
        long birth;
        long death;
        int count = 0;

        do
        {
            birth = round(population/3);
            death = round(population/4);
            population = population + birth - death;
            count++;
        }
        while(population < endSize);

        int n = count;

        printf("Years: %i\n", n);
    }
    else
    {
        printf("Years: 0\n");
    }

}
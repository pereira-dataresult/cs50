#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int altura, row, coluna, space;
    do
    {
        altura = get_int("Insira valor da altura: ");
    }
    while (altura < 1 || altura > 8);

    for (row = 0; row < altura; row++)
    {
        for (space = 0; space < altura - row - 1; space++)

        {
            printf(" ");
        }
        for (coluna = 0; coluna <= row ; coluna ++)


        {
            printf("#");
        }
        printf("  ");
        for (coluna = 0; coluna <= row; coluna ++)


        {

            printf("#");

        }

        printf("\n");

    }
}
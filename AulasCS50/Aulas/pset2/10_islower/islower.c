#include <stdio.h>
#include <ctype.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    string s = get_string("Before: ");
    printf("After: ");
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        if (islower(s[i])ir)
        {
            printf("%c", s[i] - 32);
        }
        else
        {
            printf("%c", s[i]);
        }

    }
    printf("\n");
}


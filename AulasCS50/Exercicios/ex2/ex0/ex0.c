#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <math.h>

int main(void)
{

    float L, S, index, letters = 0, words = 1, sentences = 0;
    int text_int;

    string text = get_string("Text: "); //Solicita um texto ao usuário

    //Itera por cada letra e utiliza os códigos ASCII para contagem
    for (int i = 0, n = strlen(text); i < n; i++)
    {
        text_int = (int) text[i];

        if (text_int == 32)
        {
            words++; //conta os espaços
        }
        else if (text_int == 33 || text_int == 46 || text_int == 63)
        {
            sentences++; //conta as sentenças
        }
        else if ((text_int >= 65 && text_int <= 90) || (text_int >= 97 && text_int <= 122))
        {
            letters++; //conta as letras
        }
    }


    //Calcula as variáveis do índice e o índice
    L     = (letters / words) * 100;
    S     = (sentences / words) * 100;
    index = round(0.0588 * L - 0.296 * S - 15.8);

    //Avalia o índice e mostra a saída
    if (index < 1)
    {
        printf("Before Grade 1");
    }
    else if (index >= 16)
    {
        printf("Grade 16+");
    }
    else
    {
        printf("Grade %i", (int) index);
    }

    printf("\n");
}
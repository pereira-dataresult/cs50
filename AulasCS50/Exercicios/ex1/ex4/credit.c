#include <stdio.h>
#include <cs50.h>
#include <math.h>


int main(void)
{
    long numeroDoCartao = get_long("Número: ");
    long primeiroDigito = numeroDoCartao;
    long doisDigito = numeroDoCartao;

    long primeirosDigitos = 0;
    long segundosDigitos = 0;
    long digito = 0;
    int mult;
    int soma = 0;
    int somaPrimeirosDigitos = 0;
    int numeroDeDigito = log10(numeroDoCartao) + 1;
    char str1[10];
    char str2[10];

    while(numeroDoCartao != 0 )
    {
        primeirosDigitos = numeroDoCartao % 10;
        numeroDoCartao = numeroDoCartao / 10;
        somaPrimeirosDigitos += primeirosDigitos;
        segundosDigitos = numeroDoCartao % 10;
        mult = segundosDigitos * 2;
        numeroDoCartao = numeroDoCartao / 10;
        while(mult > 0)
        {
            digito = mult % 10;
            soma += digito;
            mult = mult / 10;
        }

    }
    soma += somaPrimeirosDigitos;


    if(soma % 10 != 0)
    {
        printf("INVALID\n");

    }
    else
    {
        while(primeiroDigito >= 10)
        {
            primeiroDigito /= 10;
        }
        while(doisDigito >= 100)
        {

            doisDigito /= 10;
        }


        if(numeroDeDigito == 15 && (doisDigito == 34 || doisDigito == 37))
        {

            printf("AMEX\n");

        }
        else if (numeroDeDigito == 16 && (doisDigito == 51 || doisDigito == 52 || doisDigito == 53 || doisDigito == 54 || doisDigito == 55 ))
        {
              printf("MASTERCARD\n");

        }

        else if((numeroDeDigito == 13 || numeroDeDigito == 16) && primeiroDigito == 4)
        {

                printf("VISA\n");

        } else {
            printf("INVALID\n");
        }

    }
}
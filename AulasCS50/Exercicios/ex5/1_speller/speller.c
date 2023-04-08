// Implements a dictionary's functionality

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// #include "dictionary.h"

// Represents a node in a hash table
typedef struct node
{
    char word[LENGTH + 1];
    struct node *next;
}
node;

// Number of buckets in hash table
// const unsigned int N = 26;

// Hash table
node *table[N];

// Returns true if word is in dictionary, else false
bool check(const char *word)
{
    // TODO
    return false;
}

// Hashes word to a number
unsigned int hash(const char *word)
{
    // TODO
    // devolve o indice da ordem alfabetica a partir da primeira letra
    // sem levar em consideração a caixa alta
    if (isupper(word[0]))
    {
        int x = word[0] - 65;
        return x;
    }
    if (islower(word[0]))
    {
        int x = word[0] - 97;
        return x;
    }
    return 0;
}

// Loads dictionary into memory, returning true if successful, else false
bool load(const char *dictionary)
{
    // TODO
    // cria a variavel pra receber o arquivo do dicionario filtrando erro
    FILE *dict_file = fopen(dictionary, "r");
    if (dict_file == NULL)
    {
        return false;
    }

    // cria variaveis pra auxiliar a leitura do arquivo
    char dict_word[LENGTH + 1];

    // itera o arquivo por palavras
    while (fscanf(dict_file, "%s", dict_word) != EOF)
    {
        unsigned int hash_id = hash(dict_word);
        node *new_node = malloc(sizeof(node));
        if (new_node == NULL)
        {
            return false;
        }
        strcpy(new_node->word, dict_word);
        new_node->next = table[hash_id];
        table[hash_id]->next = new_node;

    }
    return false;
}

// Returns number of words in dictionary if loaded, else 0 if not yet loaded
unsigned int size(void)
{
    // TODO
    return 0;
}

// Unloads dictionary from memory, returning true if successful, else false
bool unload(void)
{
    // TODO
    return false;
}
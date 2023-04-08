#include <cs50.h>
#include <stdio.h>
#include <string.h>

// Max number of candidates
#define MAX 9

// Candidates have name and vote count
typedef struct
{
    string name;
    int votes;
}
candidate;

// Array of candidates
candidate candidates[MAX];

// Number of candidates
int candidate_count;

// Function prototypes
bool vote(string name);
void print_winner(void);

int main(int argc, string argv[])
{
    // Check for invalid usage
    if (argc < 2)
    {
        printf("Usage: plurality [candidate ...]\n");
        return 1;
    }

    // Populate array of candidates
    candidate_count = argc - 1;
    if (candidate_count > MAX)
    {
        printf("Maximum number of candidates is %i\n", MAX);
        return 2;
    }
    for (int i = 0; i < candidate_count; i++)
    {
        candidates[i].name = argv[i + 1];
        candidates[i].votes = 0;
    }

    int voter_count = get_int("Number of voters: ");

    // Loop over all voters
    for (int i = 0; i < voter_count; i++)
    {
        string name = get_string("Vote: ");

        // Check for invalid vote
        if (!vote(name))
        {
            printf("Invalid vote.\n");
        }
    }

    // Display winner of election
    print_winner();
}

// Update vote totals given a new vote
bool vote(string name)
{
    // TODO
    for (int i = 0, n = candidate_count; i < n; i++)
    {
        if (strcmp(candidates[i].name, name) == 0)
        {
            candidates[i].votes++;
            //printf("%i\n", candidates[i].votes); // retirar linha
            return true;
        }
    }
    return false;
}

// Print the winner (or winners) of the election
void print_winner(void)
{
    // TODO
    // ordena os candidatos do que recebeu mais voto para o que recebeu menos
    for (int j = 0, n = candidate_count; j < n - 1; j++)
    {
        for (int k = j + 1; k < n; k++)
        {
            if (candidates[k].votes > candidates[j].votes)
            {
                int troca_voto = candidates[k].votes;
                string troca_nome = candidates[k].name;
                candidates[k].votes = candidates[j].votes;
                candidates[k].name = candidates[j].name;
                candidates[j].votes = troca_voto;
                candidates[j].name = troca_nome;
            }
        }
    }

    // exibe o candidato eleito, ou caso tenha empate, exibe os outros nomes
    printf("%s\n", candidates[0].name);
    for (int i = 1, n = candidate_count; i < n; i++)
    {
        if (candidates[i].votes == candidates[0].votes)
        {
            printf("%s\n", candidates[i].name);
        }
        else
        {
            return;
        }
    }
    return;
}
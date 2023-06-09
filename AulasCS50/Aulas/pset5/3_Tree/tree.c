#include <stdio.h>
#include <stdlib.h>

// Representants a node

typedef struct node
{
    int number;
    struct node * left;
    struct node * right;
}
node;

void free_tree(node * root);
void print_tree(node * root);

int main(void)
{
    //tree fo size 0
    node * tree = NULL;

    //add number to list
    node * n = malloc(sizeof(node));
    if (n == NULL)
    {
        return 1;
    }

    n->number = 2;
    n->left = NULL;
    n->right = NULL;
    tree = n;

    //add number to list
    n = malloc(sizeof(node));
    if (n == NULL)
    {
        return 1;
    }

    n->number = 1;
    n->left = NULL;
    n->right = NULL;
    tree-> left = n;

    //add number to list
    n = malloc(sizeof(node));
    if (n == NULL)
    {
        //free memory
        return 1;
    }

    n->number = 3;
    n->left = NULL;
    n->right = NULL;
    tree-> right = n;

    //print tree
    print_tree(tree);

    //Free tree
    free_tree(tree);

}

void free_tree(node * root)
{
    if (root != NULL)
    {
        free_tree(root->left);
        free_tree(root->right);
        free(root);
    }
}

void print_tree(node * root)
{
    if (root == NULL)
    {
        return;
    }
    print_tree(root->left);
    printf("%i\n", root->number);
    print_tree(root->right);
}

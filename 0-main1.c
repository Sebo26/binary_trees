#include <stdio.h>
#include "binary_trees.h"

/* Function to print a binary tree */
void binary_tree_print(const binary_tree_t *tree)
{
    if (tree == NULL)
        return;

    printf("%d\n", tree->n);
    binary_tree_print(tree->left);
    binary_tree_print(tree->right);
}

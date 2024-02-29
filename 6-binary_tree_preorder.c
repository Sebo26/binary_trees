#include "binary_trees.h"
/**
 * binary_tree_preorder - This function goes through a binary tree using pre-order traversal.
 * tree: pointer to the root node of the tree to traverse.
 * func: pointer to a function to call for each node.
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if(tree == NULL || func == NULL)
	{
		return;
	}
	else
	{
		binary_tree_preorder(func->left);
		binary_tree_preorder(func->right);
	}
}
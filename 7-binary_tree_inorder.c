#include "binary_trees.h"
/**
 * binary_tree_inorder - This function goes through a binary tree using in-order traversal.
 * tree: pointer to the root node of the tree to traverse.
 * func: pointer to a function to call for each node.
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if(tree == NULL || func == NULL)
	{
		return;
	}
	else
	{
		binary_tree_inorder(func->left);
		binary_tree_inorder(func->right);
	}
}
#include "binary_trees.h"
/**
 * binary_tree_height - This funcion measures the height of a binary tree.
 * tree: pointer to the root node of the tree to measure the height.
 * Return: height of tree or 0(if tree is NULL).
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height;
	height = 0;
	if(tree == NULL)
	{
		return(0);
	}
	else
	{
		if(root->left != NULL || root->right != NULL)
		{
			height = height + 1;
		}
		else
		{
			return;
		}
	}
	return(height);
}

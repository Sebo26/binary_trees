#include "binary_trees.h"
/**
 * binary_tree_height - This function measures the depth of a node in a binary tree.
 * tree: pointer to the node to measure the depth.
 * Return: depth of a node or 0(if tree is NULL).
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth;
	depth = 0;
	if(tree == NULL)
	{
		return(0);
	}
	else
	{
		if(root->left != NULL || root->right != NULL)
		{
			depth = depth + 1;
		}
		else
		{
			return;
		}
	}
	return(depth);
}

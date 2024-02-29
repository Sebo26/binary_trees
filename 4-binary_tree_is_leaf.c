#include "binary_trees.h"
/**
 * binary_tree_is_leaf - This function checks if a node is a leaf.
 * @node: pointer to the node to check.
 * Return: 1(Node is a leaf) otherwise 0(if node is not leaf or node is NULL).
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node->left == NULL && node->right == NULL)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	if (node == NULL)
	{
		return (0);
	}
}

#include "binary_trees.h"
/**
 * binary_tree_height - This funcion measures the height of a binary tree.
 * @tree: pointer to the root node of the tree to measure the height.
 * Return: height of tree or 0(if tree is NULL).
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height;
	size_t left_height;
	size_t right_height;

	height = 0;
	if (tree == NULL)
	{
		return (0);
	}
	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);
	if (left_height > right_height)
	{
		height = 1 + left_height;
	}
	else
	{
		height = 1 + right_height;
	}
	return (height);
}

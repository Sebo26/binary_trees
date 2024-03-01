#include "binary_trees.h"
/**
 * binary_tree_balance - measures the balance factor of a binary tree.
 * @tree: pointer to the root node of the tree to measure the balance factor.
 * Return: balance factor of binary tree or 0(if tree is NULL).
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height;
	int right_height;
	int balanceFactor;

	if (tree == NULL)
	{
		return (0);
	}
	left_height = binary_tree_balance(tree->left);
	right_height = binary_tree_balance(tree->right);
	balanceFactor = left_height - right_height;
	return (balanceFactor);
}

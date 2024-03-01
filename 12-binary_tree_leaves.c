#include "binary_trees.h"
/**
 * binary_tree_leaves - counts the leaves in a binary tree.
 * @tree: pointer to the root node of the tree to count the number of leaves.
 * Return: number of leaves in binary tree or 0(if tree is NULL).
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leftLeaves;
	size_t rightLeaves;
	size_t numberLeaves;

	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}
	leftLeaves = binary_tree_leaves(tree->left);
	rightLeaves = binary_tree_leaves(tree->right);
	numberLeaves = leftLeaves + rightLeaves;
	return (numberLeaves);
}

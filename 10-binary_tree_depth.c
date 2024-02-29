#include "binary_trees.h"
/**
 * binary_tree_depth - measures the depth of a node in a binary tree.
 * @tree: pointer to the node to measure the depth.
 * Return: depth of a node or 0(if tree is NULL).
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth;
	size_t left_depth;
	size_t right_depth;

	if (tree == NULL)
	{
		return (0);
	}
	left_depth = binary_tree_depth(tree->left);
	right_depth = binary_tree_depth(tree->right);
	depth = 1 + (left_depth > right_depth ? left_depth : right_depth);
	return (depth);
}

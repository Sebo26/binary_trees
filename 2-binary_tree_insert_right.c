#include "binary_trees.h"
/**
 * binary_tree_insert_right - This function inserts a node as the right-child
 * of another node.
 * @parent: pointer to the node to insert the right-child in.
 * @value: value to store in the new node.
 * Return: pointer to the created node, NULL (failure) or if parent is NULL.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *rightNode;

	rightNode = malloc(sizeof(binary_tree_t));
	if (parent == NULL)
	{
		return (NULL);
	}
	if (rightNode == NULL)
	{
		return (NULL);
	}
	rightNode->n = value;
	rightNode->parent = parent;
	rightNode->left = NULL;
	rightNode->right = NULL;

	if (parent->right != NULL)
	{
		rightNode->right = parent->right;
		parent->right->parent = rightNode;
	}

	parent->right = rightNode;
	return (rightNode);
}

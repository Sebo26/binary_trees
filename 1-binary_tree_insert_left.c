#include "binary_trees.h"
/**
 * binary_tree_insert_left - This function inserts a node as the left-child of another node.
 * parent: pointer to the node to insert the left-child in.
 * value: value to store in the new node.
 * Return: pointer to the created node, NULL (failure) or if parent is NULL.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	if(parent == NULL)
	{
		return NULL;
	}
	parent->left = leftNode(value);
	return root->left;
}

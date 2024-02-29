#include "binary_trees.h"
/**
 * binary_tree_insert_right - This function inserts a node as the right-child of another node.
 * parent: pointer to the node to insert the right-child in.
 * value: value to store in the new node.
 * Return: pointer to the created node, NULL (failure) or if parent is NULL.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	if(parent == NULL)
	{
		return NULL;
	}
	parent->right = leftNode(value);
	return root->right;
}

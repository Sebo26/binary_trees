#include "binary_trees.h"
/**
 * binary_tree_node - This function creates a binary tree node.
 * parent: pointer to the parent node of the node to create.
 * value: value to put in the new node
 * Return: pointer to the new node or NULL (failure)
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	struct binary_tree_s* newNode = malloc(sizeof(struct binary_tree_s));
	newNode->parent = value;
	newNode->left = NULL;
	newNode->right = NULL;
	return newNode;
}

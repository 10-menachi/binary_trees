#include "binary_trees.h"

/**
 * binary_tree_node - This function creates a binary tree node
 * @parent: This is a pointer to the parent node of the node to create
 * @value: This is the value to be put in the new node
 *
 * Return: Pointer to the new node or NULL upon function failure
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new = malloc(sizeof(binary_tree_t));

	if (!new)
		return (NULL);

	new->parent = parent;
	new->n = value;
	new->left = NULL;
	new->right = NULL;

	return (new);
}

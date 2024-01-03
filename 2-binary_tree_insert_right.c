#include "binary_trees.h"

/**
 * binary_tree_insert_right - This function inserts a node
 * as the right-child of another node
 * @parent: pointer to the node to insert the child in
 * @value: value to store in the node
 *
 * Return: pointer to the created node, NULL on failure
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new = malloc(sizeof(binary_tree_t));

	if (!parent)
		return (NULL);

	new->parent = parent;
	new->n = value;
	new->left = NULL;
	new->right = NULL;

	if (parent->right)
	{
		new->right = parent->right;
		new->right->parent = new;
	}

	parent->right = new;

	return (new);

}

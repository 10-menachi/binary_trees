#include "binary_trees.h"

/**
 * binary_tree_balance - This function measures the balance
 * factor of a binary tree
 * @tree: This is a pointer to the root node
 * of the tree to measure the balance factor
 *
 * Return: Balance factor, 0 if tree is NULL
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
}


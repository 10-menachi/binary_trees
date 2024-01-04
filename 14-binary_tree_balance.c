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
	int left, right;

	if (!tree)
		return (0);
	left = tree->left ? (int)binary_tree_height(tree->left) : -1;
	right = tree->right ? (int)binary_tree_height(tree->right) : -1;
	return (left - right);
}

/**
 * binary_tree_height - This function measures the height of a binary tree
 * @tree: This is a pointer to the root node of the tree
 *
 * Return: Height of the tree, 0 if tree is NULL
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left = 0;
	size_t right = 0;

	if (!tree)
		return (0);

	left = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	right = tree->right ? 1 + binary_tree_height(tree->right) : 0;
	return ((left > right) ? left : right);
}

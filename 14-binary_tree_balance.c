#include "binary_trees.h"
/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure the balance factor
 * Return: int
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int bal;

	if (tree == NULL)
		return (0);

	bal = _binary_tree_height(tree->left) - _binary_tree_height(tree->right);

	return (bal);
}
/**
 * _binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree
 * Return: int
 */
int _binary_tree_height(const binary_tree_t *tree)
{
	int left, right;

	if (tree == NULL)
		return (-1);

	if (tree->left == NULL && tree->right == NULL)
		return (0);

	left = _binary_tree_height(tree->left);
	right = _binary_tree_height(tree->right);

	if (left > right)
		return (left + 1);
	else
		return (right + 1);
}

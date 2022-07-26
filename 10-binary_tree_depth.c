#include "binary_trees.h"
/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 * @tree: pointer to the node to measure the depth
 * Return: size_t
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t parent;

	if (tree == NULL)
		return (0);

	if (tree->parent == NULL)
		return (0);

	parent = binary_tree_depth(tree->parent);

	return (parent + 1);
}

#include "binary_trees.h"
/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 * @parent: pointer to the node to insert the right-child in
 * @value: value to store in the new node
 * Return: binary_tree_t*
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node, *tmp;

	if (parent == NULL)
		return (NULL);

	new_node = malloc(sizeof(binary_tree_t));
	new_node->parent = parent;
	new_node->n = value;
	new_node->left = NULL;
	tmp = parent->right;
	parent->right = new_node;

	if (tmp != NULL)
	{
		new_node->right = tmp;
		tmp->parent = new_node;
	}
	else
		new_node->right = NULL;

	return (new_node);
}

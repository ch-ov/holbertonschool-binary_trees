#include "binary_trees.h"
/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 * @parent: pointer to the node to insert the left-child in
 * @value: value to store in the new node
 * Return: binary_tree_t*
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node, *tmp;

	if (parent == NULL)
		return (NULL);

	new_node = malloc(sizeof(binary_tree_t));
	new_node->parent = parent;
	new_node->n = value;
	new_node->right = NULL;
	tmp = parent->left;
	parent->left = new_node;

	if (tmp != NULL)
	{
		new_node->left = tmp;
		tmp->parent = new_node;
	}
	else
		new_node->left = NULL;

	return (new_node);
}

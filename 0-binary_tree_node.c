#include "binary_trees.h"

/**
 * binary_tree_node - creates a binary_tree node
 *
 * @parent: a pointer to the parent node
 * @value: value for the new node
 *
 * Return: a pointer to the new node created
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *my_node;

	my_node = malloc(sizeof(binary_tree_t));
	if (!my_node)
		return (NULL);

	my_node->n = value;
	my_node->parent = parent;
	my_node->left = NULL;
	my_node->right = NULL;

	return (my_node);
}

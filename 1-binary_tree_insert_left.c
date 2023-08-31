#include "binary_trees.h"

/**
 * binary_tree_insert_left - insert to left node
 *
 * @parent: the parent node
 * @value: value to insert into node
 *
 * Return: pointer to the created node or NULL if fail
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *my_node;

	if (!parent)
		return (NULL);

	my_node = binary_tree_node(parent, value);
	if (!my_node)
		return (NULL);

	my_node->n = value;
	if (parent->left)
	{
		my_node->left = parent->left;
		parent->left->parent = my_node;
	}
	parent->left = my_node;

	return (my_node);
}

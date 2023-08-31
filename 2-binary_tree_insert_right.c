#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts into the right node
 *
 * @parent: the parent node where to insert into
 * @value: the value contained in the node
 *
 * Return: NULL if fails or a pointer to the new right node
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *my_node;

	if (!parent)
		return (NULL);

	my_node = binary_tree_node(parent, value);
	if (!my_node)
		return (NULL);

	my_node->n = value;
	if (parent->right)
	{
		my_node->right = parent->right;
		parent->right->parent = my_node;
	}
	parent->right = my_node;

	return (my_node);
}

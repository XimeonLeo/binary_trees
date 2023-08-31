#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks if a node has no child(leaf)
 *
 * @node: the node to check
 *
 * Return: 1 if node is a leaf || 0 if not
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node || node->left || node->right)
		return (0);
	return (1);
}

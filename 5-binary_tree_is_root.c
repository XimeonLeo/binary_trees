#include "binary_trees.h"

/**
 * binary_tree_is_root - checks if a node has no parent(root)
 *
 * @node: the node to check
 *
 * Return: 1 for a root node or 0 if not
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node || node->parent)
		return (0);
	return (1);
}

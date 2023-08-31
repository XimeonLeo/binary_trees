#include "binary_trees.h"

/**
 * binary_tree_preorder - traverse through a tree preorderly
 *
 * @tree: a pointer to the root node
 * @func: a function pointer tne calls each node. it takes the value
 * in the node as a parameter
 *
 * Descriptiion: root, left, right
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}

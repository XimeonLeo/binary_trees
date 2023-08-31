#include "binary_trees.h"

/**
 * binary_tree_postorder - traverse a tree postorderly
 *
 * @tree: a pointer to the root of the tree
 * @func: a function pointer that calls the node of the tree
 *
 * Description: left, right, root
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}

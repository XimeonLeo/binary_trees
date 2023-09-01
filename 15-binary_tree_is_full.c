#include "binary_trees.h"

/**
 * check_full - recursively checks if a tree is full
 *
 * @tree: root node
 *
 * Return: 1 for yes, 0 for no
 */

int check_full(const binary_tree_t *tree)
{
	if (tree)
	{
		if ((tree->left && !tree->right) ||
		(!tree->left && tree->right) ||
		check_full(tree->left) == 0 ||
		check_full(tree->right) == 0)
			return (0);
	}
	return (1);
}

/**
 * binary_tree_is_full - checks if the tree is full
 *
 * @tree: a pointer to the toot of the tree
 *
 * Return: 0 if tree is NULL
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (check_full(tree));
}

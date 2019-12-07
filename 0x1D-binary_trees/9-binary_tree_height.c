#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree:  pointer to the root node of the tree to measure the height
 *
 * Return: height of tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l = 0, r = 0;

	if (tree != NULL)
	{
		l = tree->left ? binary_tree_height(tree->left) + 1 : 0;
		r = tree->right ? binary_tree_height(tree->right) + 1 : 0;
	}
	if (l >= r)
		return (l);
	else
		return (r);
}

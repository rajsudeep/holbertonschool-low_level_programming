#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 * @tree: pointer to the root node of the tree
 * Return: number of nodes
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (!(tree->left || tree->right))
		return (0);
	return (binary_tree_nodes(tree->left) + 1 +
		binary_tree_nodes(tree->right));
}

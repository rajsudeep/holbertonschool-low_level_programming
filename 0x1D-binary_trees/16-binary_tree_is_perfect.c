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

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: pointer to the root node of the tree
 *
 * Return: number of leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (!(tree->left || tree->right))
		return (1);
	return (binary_tree_leaves(tree->left) +
		binary_tree_leaves(tree->right));
}
/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: pointer to the root node of the tree to measure the size
 *
 * Return: size of tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree != NULL)
	{
		return (binary_tree_size(tree->left) + 1 +
			binary_tree_size(tree->right));
	}
	return (0);
}

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of tree
 *
 * Return: On success 1, else 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t i = 0, count = 1;

	if (tree == NULL)
		return (0);
	for (i = 0; i < binary_tree_height(tree); i++)
		count *= 2;
	if (binary_tree_leaves(tree) == count)
		if (binary_tree_size(tree) ==
		    (2 * binary_tree_leaves(tree) - 1))
			return (1);
	return (0);
}

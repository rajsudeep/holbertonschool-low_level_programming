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
                l = binary_tree_height(tree->left) + 1;
                r = binary_tree_height(tree->right) + 1;
        }
        if (l >= r)
                return (l);
        else
                return (r);
}

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree
 *
 * Return: the balance factor number
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (binary_tree_height(tree->left) -
		binary_tree_height(tree->right));
}

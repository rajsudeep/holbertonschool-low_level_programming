#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the sibling of a node
 * @node: pointer to the node
 *
 * Return: pointer to sibling node
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node != NULL)
		if (node->parent != NULL)
			return (node == node->parent->left ? node->parent->right
				: node->parent->left);
	return (NULL);
}

/**
 * binary_tree_uncle - find the uncle of a node
 * @node: pointer to the node
 *
 * Return: pointer to the uncle node
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	return (node ? binary_tree_sibling(node->parent) : NULL);
}

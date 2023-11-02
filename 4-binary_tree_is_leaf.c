#include "binary_trees.h"
/**
 * binary_tree_is_leaf - a function that checks if a node is a leaf.
 * @node: Pointer to the node to chec
 *
 * Return: 1 if node is a leaf, 0 otherwise or if node is NULL
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL || node->left != NULL || node->right != NULL)
		return (0);

	return (1);
}

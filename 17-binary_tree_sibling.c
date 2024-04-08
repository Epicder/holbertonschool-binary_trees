#include "binary_trees.h"

/**
 * binary_tree_sibling - Finds the sibling of a node
 * @node: Pointer to the node to find the sibling
 *
 * Return: Pointer to the sibling node. If node is NULL or the parent is NULL,
 * or if node has no sibling, return NULL.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *parent = node->parent;

	if (node == NULL || node->parent == NULL)
		return (NULL);


	if (parent->left == node && parent->right != NULL)
		return parent->right;

	if (parent->right == node && parent->left != NULL)
		return parent->left;

	return (NULL);
}

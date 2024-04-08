#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_depth - Measures the depth of a node in a binary tree
 * @tree: Pointer to the node to measure the depth
 *
 * Return: The depth of the tree from the given node to the root
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	while (tree)
	{
		depth++;
		tree = tree->parent;
	}
	return (depth);
}
/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 * @tree: Pointer to the root node of the tree to check
 *
 * Return: 1 if the tree is perfect, 0 if not or if tree is NULL
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t depth_left, depth_right;

	if (tree == NULL)
		return (0);

	depth_left = tree->left ? binary_tree_depth(tree->left) : 0;
	depth_right = tree->right ? binary_tree_depth(tree->right) : 0;

	if (depth_left == depth_right)
	{
		if (tree->left == NULL && tree->right == NULL)
		return (1);
		if (tree->left && tree->right)
		return (binary_tree_is_perfect(tree->left) &&
			binary_tree_is_perfect(tree->right));
	}
	return (0);
}

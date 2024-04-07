#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"
/**
 * binary_tree_balance - measures the balance
 * @tree: puntero al nodo root
 * Return: balance
 */
int binary_tree_balance(const binary_tree_t *tree)
{
int left_height, right_height;
if (!tree)
{
return (0);
}
left_height = binary_tree_height(tree->left);
right_height = binary_tree_height(tree->right);
return (left_height - right_height);
}
/**
 * binary_tree_height - retorna la height de un arbol
 * @tree: puntero a nodo root
 * Return: altura
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_left = 0;
	size_t height_right = 0;

	if (tree == NULL)
	{
		return (0);
	}

	height_left = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	height_right = tree->right ? 1 + binary_tree_height(tree->right) : 0;

	return (height_left > height_right ? height_left : height_right);
}

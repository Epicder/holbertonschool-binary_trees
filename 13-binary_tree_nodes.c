#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_nodes - cuenta los nodos con al menos un hijo
 * @tree: puntero al nodo root
 * Return: If tree is NULL, the function must return 0
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
size_t count = 0;
if (!tree)
{
return (0);
}
if (tree->left != NULL || tree->right != NULL)
{
count++;
}
count += binary_tree_nodes(tree->left);
count += binary_tree_nodes(tree->right);
return (count);
}

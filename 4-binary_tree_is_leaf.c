#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checkea si el nodo pasado es un leaf
 * @node: nodo a ser checkeado
 * Return: 1 si es leaf, 0 si no
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
if (!node)
{
return (0);
}
if (node->right == NULL && node->left == NULL)
{
return (1);
}
return (0);
}

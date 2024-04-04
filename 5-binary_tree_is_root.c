#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_is_root - checkea si el node es root
 * @node: nodo a checkear
 * Return: 1 si es root, 0 si no
 */

int binary_tree_is_root(const binary_tree_t *node)
{
if (!node)
{
return (0);
}
if (node->left != NULL && node->right != NULL)
{
return (1);
}
return (0);
}

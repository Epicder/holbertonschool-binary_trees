#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_depth - obtiene la profundiad de un arbol binario
 * @tree: puntero a nodo root del arbol
 * Return: 0
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
size_t depth = 0;
if (!tree)
{
return (0);
}
while (tree->parent != NULL)
{
tree = tree->parent;
depth++;
}
return (depth);
}

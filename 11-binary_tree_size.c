#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_size - obtiene el tamanio del arbol binario
 * @tree: puntero al nodo root del arbol
 * Return: size
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
size_t size1, size2;
if (!tree)
{
return (0);
}
size1 = binary_tree_size(tree->right);
size2 = binary_tree_size(tree->left);
if (size1 > size2)
{
return (size1 + size2 + 1);
}
else
{
return (size2 + size1 + 1);
}
}
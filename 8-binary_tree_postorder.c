#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_postorder - recorre un arbol binario en postorder
 * @tree: puntero al nodo root del arbol binario
 * @func: pointer to a function to call for each node.
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
if (!tree || !func)
{
return;
}
binary_tree_postorder(tree->left, func);
binary_tree_postorder(tree->right, func);
func(tree->n);
}

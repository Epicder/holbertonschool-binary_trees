#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_delete - elimina un arbol binario
 * @tree: puntero al arbol binario
 */

void binary_tree_delete(binary_tree_t *tree)
{
if (!tree)
{
return;
}
binary_tree_delete(tree->right);
binary_tree_delete(tree->left);
free(tree);
}
#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_insert_left - crea un nuevo nodo a la izquierda
 * @parent: parent del nodo
 * @value: valor del nuevo nodo
 * Return: punetro a nodo
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
binary_tree_t *node;
if (!parent)
{
return (NULL);
}
node = malloc(sizeof(binary_tree_t));
if (!node)
{
return (NULL);
}
node->n = value;
node->parent = parent;
node->left = parent->left;
node->right = NULL;
if (parent->left != NULL)
{
parent->left->parent = node;
}
parent->left = node;
return (node);
}

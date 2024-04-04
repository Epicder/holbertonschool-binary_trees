#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_node - crea un nuevo nodo en un arbol binario
 * @parent: parent del nuevo nodo
 * @value: valor del nuevo nodo
 * Return: pointer al nuevo nodo
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
binary_tree_t *node;
node = malloc(sizeof(binary_tree_t));
if (node == NULL)
{
return (NULL);
}
node->n = value;
node->parent = parent;
node->left = NULL;
node->right = NULL;
return (node);
}

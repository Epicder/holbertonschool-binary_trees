#include "binary_trees.h"
#include <stdlib.h>
size_t binary_tree_height(const binary_tree_t *tree)
{
  size_t count_left;
  size_t count_right;
  if (!tree)
    {
      return (0);
    }
  count_left = binary_tree_height(tree->left);
  count_right = binary_tree_height(tree->right);

  if (count_left > count_right)
    {
      return (count_left + 1);
    }
  else
    {
      return (count_right + 1);
    } 
  }

#include "binary_trees.h"
/**
 * binary_tree_depth - function that measures the depth of a node in a binary tree
 * @tree: a pointer to the node to measure the depth
 * Return: depth
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
  size_t depth;
  if (tree == NULL)
    return 0;
  else
    {
      depth = binary_tree_depth(tree->parent);
    }
  if (tree->parent == NULL)
    return (depth);
  return depth + 1;
}

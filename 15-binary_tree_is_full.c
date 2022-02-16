#include "binary_trees.h"

/**
 * binary_tree_is_full -  function that checks if a binary tree is full
 * @tree: a pointer to the root node of the tree ro check
 * Return: 1 or 0 (full or not)
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
if (tree == NULL)
return (0);
else
{
if (tree->left == NULL && tree->right == NULL)
return (1);
return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
}
}

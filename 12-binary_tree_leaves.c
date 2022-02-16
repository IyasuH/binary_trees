#include "binary_trees.h"
/**
 * binary_tree_leaves - function that counts the leaves in a binary tree
 * @tree: pointer to the root node of the tree to counnt the number of leaves
 * Return: number of leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
size_t height = 0;
if (tree == NULL)
return (0);
else if (tree->left == NULL && tree->right == NULL)
{
return (1);
}
else
{
if (tree->left != NULL)
height = height + 1;
if (tree->right != NULL)
height = height + 1;
return (height);
}
}

#include "binary_trees.h"
/**
 * binary_tree_height - function that measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 * Return: the height of tree or 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
size_t n;
if (tree == NULL)
return (0);
else
{
size_t ldepth = binary_tree_height(tree->left);
size_t rdepth = binary_tree_height(tree->right);
if (ldepth > rdepth)
n = ldepth + 1;
else
n = rdepth + 1;
}
if (tree->left == NULL && tree->right == NULL)
return (n - 1);
return (n);
}

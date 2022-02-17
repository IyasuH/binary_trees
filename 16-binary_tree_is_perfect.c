#include "binary_trees.h"

/**
 * binary_tree_is_perfect - function that checks if a binary is perfect
 * @tree: pointer to the root node of the tree to check
 * Return: 0 or 1 perfect or not
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
binary_tree_t *left, *right;
if (tree == NULL)
return (0);
left = tree->left;
right = tree->right;
if (binary_tree_is_leaf(tree))
return (1);
if (left == NULL || right == NULL)
return (0);
if (binary_tree_depth(left) == binary_tree_depth(right))
{
if (binary_tree_is_perfect(left) && binary_tree_is_perfect(right))
return (1);
}
return (0);
}

/**
 * binary_tree_is_leaf - function that checks if a node is a leaf
 * @node: is a pointer to the node to check
 *
 * Return: 1 if node is a leaf, otherwise 0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
if (node != NULL)
{
if (node->left == NULL && node->right == NULL)
return (1);
else
return (0);
}
else
return (0);
}

/**
 * binary_tree_depth - function that measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 * Return: the height of tree or 0 if tree is NULL
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
size_t n;
if (tree == NULL)
return (0);
else
{
size_t ldepth = binary_tree_depth(tree->left);
size_t rdepth = binary_tree_depth(tree->right);
if (ldepth > rdepth)
n = ldepth + 1;
else
n = rdepth + 1;
}
if (tree->left == NULL && tree->right == NULL)
return (n - 1);
return (n);
}

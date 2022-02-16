#include "binary_trees.h"

/**
 * binary_tree_balance - function that measures
 * the balance factor of a binary tree
 * @tree: is pointer to the root node of thr tree to measure the balance factor
 * Return: the balance factor of node
 */

int binary_tree_balance(const binary_tree_t *tree)
{
int l = 0;
int r = 0;
if (tree == NULL)
return (0);
if (tree->left != NULL)
l = binary_tree_height_me(tree->left);
if (tree->right != NULL)
r = binary_tree_height_me(tree->right);
return (l - r);
}

/**
 * binary_tree_height_me - function that measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 * Return: the height of tree or 0 if tree is NULL
 */

int binary_tree_height_me(const binary_tree_t *tree)
{
int n;
if (tree == NULL)
return (0);
else
{
int ldepth = binary_tree_height_me(tree->left);
int rdepth = binary_tree_height_me(tree->right);
if (ldepth > rdepth)
n = ldepth + 1;
else
n = rdepth + 1;
}
return (n);
}

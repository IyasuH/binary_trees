#include "binary_trees.h"

/**
 * binary_tree_nodes - function that counts the nodes
 * with at least 1 child in a binary tree
 * @tree: pointer to the root node of the tree to count the number of nodes
 * Return: number of nodes with at least 1 child or 0 if tree NULL
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
size_t height = 0;
if (tree == NULL)
return (0);
else
{
if (tree->parent == NULL)
height = 1;
if (tree->left != NULL)
height = height + 1;
if (tree->right != NULL)
height = height + 1;
return (height);
}
}

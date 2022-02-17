#include "binary_trees.h"

/**
 * binary_tree_nodes - function that counts the nodes
 * with at least 1 child in a binary tree
 * @tree: pointer to the root node of the tree to count the number of nodes
 * Return: number of nodes with at least 1 child or 0 if tree NULL
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
if (!tree)
return (0);
if (tree->right != NULL || tree->left != NULL)
return (binary_tree_nodes(tree->right) + binary_tree_nodes(tree->left) + 1);
return (binary_tree_nodes(tree->right) + binary_tree_nodes(tree->left));
}

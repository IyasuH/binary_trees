#include "binary_trees.h"
/**
 * binary_tree_uncle - function that finds the uncle of a node
 * @node: pointer to the node to find uncle
 * Return: pointer to the uncle or NULL
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
if (node == NULL)
return (NULL);
return (binary_tree_sibling(node->parent));
}

/**
 * binary_tree_sibling - function that finds the siblig of a node
 * @node: is a pointer to the node to find the sibling
 * Return: pointer to the sibling node or NULL
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
if (node == NULL || node->parent == NULL)
return (NULL);
if (node->parent->left == node)
return (node->parent->right);
else if (node->parent->right == node)
return (node->parent->left);
else
return (NULL);
}

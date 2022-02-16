#include "binary_trees.h"

/**
 * binary_tree_insert_right - insert a node as the right-child of another node
 * @parent:  pointer to the node to insert the right-child in
 * @value: the value to store in the new node
 *
 * Return:  a pointer to the created node, or NULL on failure
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
binary_tree_t *root = NULL;
if (parent == NULL)
return (NULL);
root = binary_tree_node(parent, value);
if (root == NULL)
return (NULL);
root->parent = parent;
root->n = value;
root->left = NULL;
if (parent->right != NULL)
{
root->right = parent->right;
parent->right = root;
root->right->parent = root;
}
else
{
parent->right = root;
}
return (root);
}

#include "binary_trees.h"

/**
 * binary_tree_insert_left - insert a node as the left child of another node
 * @parent: pointer to the node to insert the left-child in
 * @value: the value to store in the new node
 *
 * Return: pointer to the created node or NULL on failure
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
  binary_tree_t *root = NULL;
  if(parent == NULL)
     return(NULL);
  root = binary_tree_node(parent, value);
  if(root == NULL)
    return(NULL);
  root->parent = parent;
  root->n = value;
  root->right = NULL;
  if (parent->left != NULL)
    {
      root->left = parent->left;
      parent->left = root;
      root->left->parent = root;
    }
  else
    {
      parent->left = root;
    }
  return(root);
}

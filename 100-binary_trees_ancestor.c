#include "binary_trees.h"

/**
 * binary_trees_ancestor -  function that finds the
 * lowest common ancestor of two nodes
 * @first: pointer to the first node
 * @second: pointer to the second node
 * Return: pointer to the lowest common ancestor node of the
 * two given nodes if  no common ancestor was found return NULL
 */
binary_tree_t *binary_trees_ancestor(binary_tree_t *first,
				     binary_tree_t *second)
{
if (first->parent == second)
return (second);
if (second->parent == first)
return (first);
if (first->parent != second->parent)
return (binary_trees_ancestor(first->parent, second->parent));
else
return (first->parent);
return (NULL);
}

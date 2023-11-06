#include "binary_trees.h"
/**
 *binary_tree_node - create a node in a tree.
 *@parent : address of the parent node in the tree.
 *@value : integer data type inserted into the node.
 *Return: address of the new created node ,otherwise NULL.
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
binary_tree_t *new_node;
new_node = malloc(sizeof(binary_tree_t));
if (new_node == NULL)
{
return (NULL);
}
new_node->n = value;
new_node->parent = parent;
new_node->left = NULL;
new_node->right = NULL;
return (new_node);
}


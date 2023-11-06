#include <stdio.h>
#include <stdlib.h>
#include "header.h"


binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
    parent = malloc(sizeof(binary_tree_t));

    if (parent == NULL)
    {
        return NULL;
    }

    parent-> n = value;
    parent->left = NULL;
    parent->right = NULL;
    parent->parent = NULL;
    return parent;
}


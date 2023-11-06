#include <stdio.h>
#include <stdlib.h>
#include "header.h"


binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
    binary_tree_t *TempNode = malloc(sizeof(binary_tree_t));

    if (TempNode == NULL)
    {
        return NULL;
    }

    parent = TempNode;
    parent-> n = value;
    return parent;
}


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "binary_trees.h"


/**
 * binary_tree_is_leaf - checks if the node is a leaf
 * @node: node which is the root initially
 *
 * Return: length of printed tree after process
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->parent == NULL)
	{
		return (1);
	}
	return (0);
}

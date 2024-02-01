#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "binary_trees.h"



/**
 * binary_tree_nodes - checks if the node is a root
 * @tree: node which is the root initially
 *
 * Return: None
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	return ((tree->left != NULL || tree->right != NULL) +
		(binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right)));
}

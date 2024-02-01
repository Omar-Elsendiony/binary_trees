#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "binary_trees.h"


/**
 * max - get maximum of two numbers
 * @x: first number
 * @y: second number
 *
 * Return: maximum of both integers
 */
int max(int x, int y)
{
	if (x > y)
		return (x);
	else
		return (y);
}

/**
 * binary_tree_height - checks if the node is a root
 * @tree: node which is the root initially
 *
 * Return: None
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (1 + max(tree->left, tree->right));
}

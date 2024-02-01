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
 * binary_tree_height_wrapper - checks if the node is a root
 * @tree: node which is the root initially
 * @count: node which is the root initially
 *
 * Return: None
 */
size_t binary_tree_height_wrapper(const binary_tree_t *tree, int count)
{
	if (tree == NULL)
	{
		if (count == 0)
			return (0);
		else
			return (-1);
	}
	return (1 + max(binary_tree_height_wrapper(tree->left, 1),
				binary_tree_height_wrapper(tree->right, 1)));
}


/**
 * binary_tree_height - checks if the node is a root
 * @tree: node which is the root initially
 *
 * Return: None
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	return (binary_tree_height_wrapper(tree, 0));
}

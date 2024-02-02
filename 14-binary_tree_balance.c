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
 * binary_tree_height_wrapper - get maximum of two numbers
 * @tree: first number
 *
 * Return: maximum of both integers
 */
size_t binary_tree_height_wrapper(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	return (1 + max(binary_tree_height_wrapper(tree->left),
				binary_tree_height_wrapper(tree->right)));
}


/**
 * binary_tree_balance_wrapper - checks if the node is a root
 * @tree: node which is the root initially
 *
 * Return: count
 */
int binary_tree_balance_wrapper(const binary_tree_t *tree)
{
	size_t l, r;
	int diff;

	if (tree == NULL)
	{
		return (0);
	}
	l = binary_tree_height_wrapper(tree->left);
	r = binary_tree_height_wrapper(tree->right);
	diff = l - r;
	return (diff);
}


/**
 * binary_tree_balance - checks if the node is a root
 * @tree: node which is the root initially
 *
 * Return: None
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	return (binary_tree_balance_wrapper(tree));
}

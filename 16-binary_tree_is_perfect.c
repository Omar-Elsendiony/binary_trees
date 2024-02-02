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
 * binary_tree_is_perfect - checks if the node is a root
 * @tree: node which is the root initially
 *
 * Return: None
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	else if (!((tree->left == NULL && tree->right == NULL) ||
		(tree->left != NULL && tree->right != NULL)))
	{
		return (0);
	}
	if (tree->left != NULL)
		/* this means that the right is also null as we checked above*/
		return ((binary_tree_is_perfect(tree->left) &&
				binary_tree_is_perfect(tree->right)) &&
				(binary_tree_height_wrapper(tree->left) ==
				binary_tree_height_wrapper(tree->right)));
	else
	{
		return (1);
	}
}

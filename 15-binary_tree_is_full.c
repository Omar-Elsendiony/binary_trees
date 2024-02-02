#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "binary_trees.h"



/**
 * binary_tree_is_full - checks if the node is a root
 * @tree: node which is the root initially
 *
 * Return: None
 */
int binary_tree_is_full(const binary_tree_t *tree)
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
		return ((binary_tree_is_full(tree->left) &&
				binary_tree_is_full(tree->right)));
	else
	{
		return (1);
	}
}

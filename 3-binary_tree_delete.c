#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "binary_trees.h"


/**
 * binary_tree_delete -deletes all the tree
 * 
 * @tree: node which is the root initially
 *
 * Return: length of printed tree after process
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;
	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);
    tree->parent = NULL;
	free(tree);
}

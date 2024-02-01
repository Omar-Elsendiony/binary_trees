#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "binary_trees.h"



/**
 * binary_tree_height_wrapper - checks if the node is a root
 * @tree: node which is the root initially
 * @count: node which is the root initially
 *
 * Return: None
 */
size_t binary_tree_depth_wrapper(const binary_tree_t *tree, int count)
{
	if (tree == NULL)
    {
        return (0);
    }
    else if (tree->parent == NULL)
    {
        return (count);
    }
	return (binary_tree_depth_wrapper(tree->parent, count + 1));
}


/**
 * binary_tree_height - checks if the node is a root
 * @tree: node which is the root initially
 *
 * Return: None
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	return (binary_tree_depth_wrapper(tree, 0));
}

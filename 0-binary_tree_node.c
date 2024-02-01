#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "binary_trees.h"


/**
 * print_t - Stores recursively each level in an array of strings
 *
 * @parent: Pointer to the parent node
 * @value: value to add to the newly created node
 *
 * Return: length of printed tree after process
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
    binary_tree_t *newNode = malloc(sizeof(binary_tree_t));
    newNode->parent = parent;
    newNode->n = value;
    return newNode;
}

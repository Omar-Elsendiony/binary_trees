#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "binary_trees.h"


/**
 * binary_tree_insert_right -inserts a new node to the right
 * of an already available node
 * @parent: Pointer to the parent node
 * @value: value to add to the newly created node
 *
 * Return: length of printed tree after process
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode, *temp;

	if (parent == NULL)
		return (NULL);
	newNode = malloc(sizeof(binary_tree_t));
	if (newNode == NULL)
		return (NULL);
	/* new node data */
	newNode->parent = parent;
	newNode->n = value;
	newNode->left = NULL;
	newNode->right = NULL;
	/****************/
	if (parent->right)
	{
		temp = parent->right; /* storing the left node in a temp var*/
		parent->right = newNode;
		newNode->right = temp;
		temp->parent = newNode;
	}
	else
		parent->right = newNode;
	return (newNode);
}

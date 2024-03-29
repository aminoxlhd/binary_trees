#include "binary_trees.h"

/**
 * binary_tree_insert_left - a function that inserts a node as the left-child
 * @parent: is a pointer to the node to insert the left-child in
 * @value: is the value to store in the new node
 * Return: the function must return a pointer to the created node, or NULL
 **/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (parent == NULL)
		return (NULL);

	node = binary_tree_node(parent, value);
	if (node == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		parent->left->parent = node;
		node->left = parent->left;
	}
	parent->left = node;

	return (node);
}

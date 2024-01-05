#include "binary_trees.h"


/**
 * binary_tree_nodes - a function that counts the nodes with at least 1 child
 * @tree: is a pointer to the root node of the tree to count the number nodes
 * Return: the count of nodes.
 **/

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count_nodes = 0, left = 0, right = 0;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (0);

	left = binary_tree_nodes(tree->left);
	right = binary_tree_nodes(tree->right);
	count_nodes = left + right + 1;

	return (count_nodes);
}

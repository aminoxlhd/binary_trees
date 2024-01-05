#include "binary_trees.h"

/**
 * binary_tree_size - a function that measures the size of a binary tree
 * @tree: is a pointer to the root node of the tree to measure the size
 * Return: the size of the tree otherwise 0.
 **/
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0, right = 0, left = 0;

	if (tree == NULL)
		return (0);

	right = binary_tree_size(tree->right);
	left = binary_tree_size(tree->left);

	size = right + left + 1;
	return (size);
}

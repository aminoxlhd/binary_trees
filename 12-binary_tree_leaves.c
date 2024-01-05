#include "binary_trees.h"

/**
 * binary_tree_leaves - a function that counts the leaves in a binary tree
 * @tree: is a pointer to the root node of the tree to count the number
 * Return: the count of leaves in the binary tree.
 **/

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves = 0, right = 0, left = 0;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	right = binary_tree_leaves(tree->right);
	left = binary_tree_leaves(tree->left);
	leaves = right + left;

	return (leaves);
}

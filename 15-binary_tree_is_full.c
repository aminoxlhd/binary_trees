#include "binary_trees.h"

/**
 * binary_tree_is_full - a function that checks if a binary tree is full
 * @tree: is a pointer to the root node of the tree to check
 * Return: 1 if full, otherwise 0.
 **/
int binary_tree_is_full(const binary_tree_t *tree)
{
	int is_full = 0;

	if (tree == NULL)
		return (is_full);

	if (tree->left == NULL && tree->right == NULL)
	{
		is_full = 1;
		return (is_full);
	}

	if (tree->left != NULL && tree->right != NULL)
	{
		is_full = binary_tree_is_full(tree->left) &&
			binary_tree_is_full(tree->right);
	}

	return (is_full);
}

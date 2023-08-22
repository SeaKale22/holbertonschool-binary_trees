#include "binary_trees.h"
/**
 * binary_tree_is_full- checks if a binary tree is full
 * @tree: the tree to be checked
 *
 * Return: 1 if tree is full, else 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	if (binary_tree_is_full(tree->right) == 0 
	|| binary_tree_is_full(tree->left) == 0)
		return (0);
	else
		return (1);
}

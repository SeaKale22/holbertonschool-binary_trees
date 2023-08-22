#include "binary_trees.h"
/**
 * binary_tree_leaves- counts number of leaves in binary tree
 * @tree: tree to be counted
 *
 * Return: number of leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t count = 0;

	if (!tree)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		count++;
	count += binary_tree_leaves(tree->left);
	count += binary_tree_leaves(tree->right);
	return (count);
}

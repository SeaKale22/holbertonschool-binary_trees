#include "binary_trees.h"
/**
 * binary_tree_depth- finds the depth of a node in a binary tree
 * @tree: pointer to node
 *
 * Return: the depth
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (!tree)
		return (0);
	while (tree)
	{
		tree = tree->parent;
		depth++;
	}
	return (depth - 1);
}

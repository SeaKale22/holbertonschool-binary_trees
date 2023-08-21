#include "binary_trees.h"
/**
 * binary_tree_is_root- cheacks if given node is a root node
 * @node: Node to be checked
 *
 * Return: 1 if root, else 0
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
		return (0);
	if (!node->parent)
		return (1);
	else
		return (0);
}

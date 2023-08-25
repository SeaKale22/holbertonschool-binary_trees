#include "binary_trees.h"
#include "14-binary_tree_balance.c"
#include "15-binary_tree_is_full.c"
/**
 * binary_tree_is_perfect- checks if a binary tree is perfect
 * @tree: the tree to be checked
 *
 * Return: 1 if perfect, else 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (binary_tree_is_full(tree) != 1)
		return (0);
	if (binary_tree_balance(tree) != 0)
		return (0);
	else
		return (1);
}

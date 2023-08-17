#include "binary_trees.h"
/**
 * binary_tree_insert_right- inserts a node as the right child of another node
 * @parent: parent node to insert right child in
 * @value: value to store in new node
 *
 * Return: pointer to new node or null
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (!parent)
		return (NULL);
	new_node = malloc(sizeof(binary_tree_t));
	if (!new_node)
		return (NULL);
	new_node->parent = parent;
	new_node->n = value;
	new_node->right = parent->right;
	new_node->left = NULL;
	if (new_node->right)
		new_node->right->parent = new_node;
	parent->right = new_node;
	return (new_node);
}

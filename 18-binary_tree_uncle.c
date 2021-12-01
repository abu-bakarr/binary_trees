#include "binary_trees.h"
/**
 * binary_tree_uncle - Finds the uncle of a Binary tree's node
 *
 * @node: Pointer to the node to be checked
 * Return: node
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *top = NULL;

	if (!node || !node->parent || !node->parent->parent)
		return (NULL);
	top = node->parent->parent;
	if (top->left == node->parent)
		return (top->right);
	if (top->right == node->parent)
		return (top->left);
	return (node->parent);
}

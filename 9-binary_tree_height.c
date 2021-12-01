#include "binary_trees.h"
/**
 * height - Height of a Binary tree
 *
 * @tree: Pointer to the root node
 * Return: right_height + 1 or left_height + 1
 */
size_t height(const binary_tree_t *tree)
{
	size_t left_height = 0, right_height = 0;

	if (!tree)
		return (0);
	left_height = height(tree->left);
	right_height = height(tree->right);
	if (left_height > right_height)
		return (left_height + 1);
	return (right_height + 1);
}
/**
 * binary_tree_height - Height of a Binary tree
 *
 * @tree: Pointer to the root node
 * Return: right_height or left_height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t hgh = 0;

	if (!tree)
		return (0);
	hgh = height(tree);
	return (hgh - 1);
}

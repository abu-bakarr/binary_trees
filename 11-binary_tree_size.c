#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: pointer to the root node of the tree to measure the size
 * Return: size of the binary tree. 
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t tree_size = 0;

	if (tree)
	{
		/* tree_size: number of nodes in a tree */
		tree_size += 1; /* for root */
		tree_size += binary_tree_tree_size(tree->left);
		tree_size += binary_tree_tree_size(tree->right);
		return (tree_size);
	}
	return (0);
}

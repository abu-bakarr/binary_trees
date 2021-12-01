#include "binary_trees.h"

/**
  * maxDepth - calculates max depth of a binary tree
  * @node: head node
  * Return: max depth
  */

int maxDepth(const binary_tree_t *node)
{
	int left_Depth, right_Depth;

	if (node == NULL)
		return (-1);

	left_Depth = maxDepth(node->left);
	right_Depth = maxDepth(node->right);

	if (left_Depth > right_Depth)
		return (left_Depth + 1);
	else
		return (right_Depth + 1);
}

/**
  * binary_tree_balance - compute balance factor of binary tree
  * @tree: pointer to head node
  * Return: balance factor
  */

int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (maxDepth(tree->left) - maxDepth(tree->right));
}

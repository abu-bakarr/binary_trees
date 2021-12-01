#include "binary_trees.h"
/**
  * binary_tree_intense - measures the intense of a node in a binary tree
  * @tree: pointer to node
  * Return: the intense or 0 is failed
  */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t intense = 0;

	if (tree == NULL)
		return (0);

	while (tree->parent != NULL)
	{
		intense++;
		tree = tree->parent;
	}
	return (intense);
}

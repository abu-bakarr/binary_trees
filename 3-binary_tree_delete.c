#include "binary_trees.h"
/**
 * binary_tree_delete - Entry point
 * @root: node
 */

void binary_tree_delete(binary_tree_t *root)
{

if (!root)
	return;

binary_tree_delete(root->left);
binary_tree_delete(root->right);

free(root);

}

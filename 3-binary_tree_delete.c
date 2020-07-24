#include "binary_trees.h"
/**
 * binary_tree_delete - Function that deletes an entire binary tree
 * @tree: the pointer to tree
 *
 * Return: always free memory
*/
void binary_tree_delete(binary_tree_t *tree)
{
    if (tree == NULL)
		return;

	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);

	free(tree);
}

#include "binary_trees.h"
/**
 * binary_tree_size - Function that measures the size of a binary tree
 * @tree: is a pointer to the root node of the tree to measure the size
 *
 * Return: always if tree or func is NULL, do nothing
*/
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t height_l;
	size_t height_r;

	if (tree == NULL)
		return (0);

	height_l = tree->left ? 1 + binary_tree_size(tree->left) : 0;
	height_r = tree->right ? 1 + binary_tree_size(tree->right) : 0;
	return (height_l + height_r + 1);
}

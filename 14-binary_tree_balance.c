#include "binary_trees.h"
/**
 * binary_tree_height - Function that measures
 * the height of a binary tree
 * @tree: is a pointer to the root node of
 * the tree to measure the height.
 *
 * Return: always if tree or func is NULL, do nothing
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_l;
	size_t height_r;

	if (tree == NULL)
		return (0);

	height_l = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	height_r = tree->right ? 1 + binary_tree_height(tree->right) : 0;
	return (height_l > height_r ? height_l : height_r);
}
/**
 * binary_tree_balance - Function that measures
 * the balance factor of a binary tree
 * @tree: is a pointer to the root node
 * of the tree to measure the balance factor
 *
 * Return: always If tree is NULL, return 0
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	int left, right;

	if (!tree)
		return (0);

	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);
	return (left - right);
}

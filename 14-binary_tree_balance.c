#include "binary_trees.h"
/**
 * binary_tree_height - Function that return heigh of the tree
 * @tree: is a pointer to the root node.
 * Return: returns height of the binary tree.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int h_left, h_right;

	if (!tree)
		return (0);

	h_left = binary_tree_height(tree->left);
	h_right = binary_tree_height(tree->right);

	if (h_left > h_right)
		return (h_left + 1);
	else
		return (h_right + 1);
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

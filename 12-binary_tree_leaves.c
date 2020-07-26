#include "binary_trees.h"
/**
 * binary_tree_leaves - Function that measures the size of a binary tree
 * @tree: is a pointer to the root node of the tree to count the number of leaves
 *
 * Return: always If tree is NULL, the function must return 0
*/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves = 0;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		leaves++;

	if (tree->left != NULL)
		leaves += binary_tree_leaves(tree->left);
	if (tree->right != NULL)
		leaves += binary_tree_leaves(tree->right);
	return (leaves);
}

#include "binary_trees.h"
/**
 * binary_tree_insert_right - Function that inserts a node as
 * the left-child of another node.
 * @parent: the node parent
 * @value: the value of parent node
 *
 * Return: always successful n_node
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *n_node;

	if (parent == NULL)
		return (NULL);

	n_node = malloc(sizeof(binary_tree_t));

	if (n_node == NULL)
		return (NULL);

	n_node->n = value;
	n_node->parent = parent;
	n_node->left = NULL;

	if (parent->right == NULL)
	{
		parent->right = n_node;
		n_node->right = NULL;
	}
	else
	{
		n_node->right = parent->right;
		parent->right->parent = n_node;
		parent->right = n_node;
	}
	return (n_node);
}

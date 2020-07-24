#include "binary_trees.h"
/**
 * binary_tree_insert_left - Function that inserts a node as
 * the left-child of another node.
 * @parent: the node parent
 * @value: the value of parent node
 *
 * Return: always successful n_node
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *n_node;

	if (parent == NULL)
		return (NULL);

	n_node = malloc(sizeof(binary_tree_t));

	if (n_node == NULL)
		return (NULL);

	n_node->n = value;
	n_node->parent = parent;
	n_node->right = NULL;

	if (parent->left == NULL)
	{
		parent->left = n_node;
		n_node->left = NULL;
	}
	else
	{
		n_node->left = parent->left;
		parent->left->parent = n_node;
		parent->left = n_node;
	}
	return (n_node);
}

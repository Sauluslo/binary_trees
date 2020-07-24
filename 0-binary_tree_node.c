#include "binary_trees.h"
/**
 * binary_tree_node - Function that creates a binary tree node
 * @parent: the node parent
 * @value: the value of parent node
 *
 * Return: always successful n_create
*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *n_create = malloc(sizeof(binary_tree_t));

	if (n_create == NULL)
		return (NULL);

	n_create->n = value;
	n_create->parent = parent;
	n_create->left = NULL;
	n_create->right = NULL;
	return (n_create);
}

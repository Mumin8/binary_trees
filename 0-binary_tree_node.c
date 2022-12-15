#include "binary_trees.h"
/**
 * binary_tree_node - the function to create a node
 *
 * @parent: the pointer to the parent node
 * @value: the value in the node
 * Return: pointer to the newly created node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);

	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = NULL;

	return (new);
}

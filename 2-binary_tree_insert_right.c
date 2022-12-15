#include "binary_trees.h"
/**
 * binary_tree_insert_left - insert a node at the left
 *
 * @parent: the pointer to the parent node
 * @value: the value in the node
 * Return: the pointe t the new node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = binary_tree_node(parent, value);
	if (parent->right != NULL)
	{
		new->right = parent->right;
		parent->right->parent = new;
	}
	parent->right = new;

	return (new);
}

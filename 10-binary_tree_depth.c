#include "binary_trees.h"
/**
 * binary_tree_depth - measures a tree depth
 *
 * @tree: the tree to measure
 *
 * Return: the depth
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth;

	depth = ((tree && tree->parent) ? 1 + binary_tree_depth(tree->parent) : 0);
	return (depth);
}

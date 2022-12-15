#include "binary_trees.h"
/**
 * binary_tree_height - the height of tree
 *
 * @tree: the tree
 * Return: the height of the tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t rh, lh;
	
		rh = tree->right ? 1 + binary_tree_height(tree->right) : 0;
		lh = tree->left ? 1 + binary_tree_height(tree->left) : 0;
		return (rh > lh ? rh : lh);
	}
	return (0);
}

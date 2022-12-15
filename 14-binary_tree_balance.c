#include "binary_trees.h"
/**
 * binary_tree_balance - balanced tree
 *
 * @tree: the tee
 * Return: the difference
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	size_t l, r;

	if (tree)
	{
		l = tree->left ? 1 + binary_tree_balance(tree->left): 0;
		r = tree->right ? 1 + binary_tree_balance(tree->right) : 0;
		return (l - r);
	}
	return (0);
}

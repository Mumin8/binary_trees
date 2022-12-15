#include "binary_trees.h"
/**
 * binary_tree_inorder - traverse a tree in inorder
 *
 * @tree: the tree to traverse
 * @func: the function pointer
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}

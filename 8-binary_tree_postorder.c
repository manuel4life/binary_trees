#include "binary_trees.h"

/**
 * binary_tree_postorder - Moves through a
 * binary tree using post-order traversal
 * @tree: pointer to the root node for the tree
 *
 * @func: a pointer to a function to call for each node.
 * with a parameter to this function
 *
 * Return: nothing
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree != NULL && func != NULL)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}

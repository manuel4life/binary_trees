#include "binary_trees.h"

/**
 * binary_tree_is_root - checks if a node is a root of the tree
 * @node: pointer to node to check
 * Return: 1 if node is a root, otherwise to nothing
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node != NULL)
	{
		if (node->parent == NULL)
			return (1);
	}
	return (0);
}

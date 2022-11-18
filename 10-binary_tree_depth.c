#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node of a binary tree
 * @tree: pointer to the node to be measured
 * Return: height or NULL if tree is empty
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth_node = 0;

	if (tree != NULL && tree->parent != NULL)
	{
		depth_node = binary_tree_depth(tree->parent) + 1;
		return (depth_node);
	}
	return (0);
}

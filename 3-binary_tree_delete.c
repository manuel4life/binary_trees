#include <stdlib.h>

/**
 * binary_tree_delete - delete's everything in the binary tree
 * @tree: pointer to the root node
 * Return: nothing
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree)
	{
		binary_tree_delete(tree->left);
		binary_tree_delete(tree->right);
		free(tree);
		return;
	}
}

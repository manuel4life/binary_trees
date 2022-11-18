#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts node for the
 * left-child
 * @parent: binary_tree_t parent node
 * @value: integer  variable
 * Return: new node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new, *temp;

	if (parent == NULL)
		return (NULL);

	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);

	if (parent->left == NULL)
	{
		parent->left = new;
		return (new);
	}
	temp = parent->left;
	parent->left = new;
	new->left = temp;
	temp->parent = new;

	return (new);
}

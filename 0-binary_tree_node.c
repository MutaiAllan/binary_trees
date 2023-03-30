#include "binary_trees.h"

/**
 * binary_tree_node - Creates a bianry tree node.
 * @parent: Pointer to the parent of the node to create.
 * @value: The value to put in the new node.
 *
 * Return: NULLif an error occurs else a ppointer to the new node.
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);

	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = NULL;

	return (new);
}

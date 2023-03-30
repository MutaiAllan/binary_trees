#include "binary_trees.h"

/**
 * binary_trees_ancestor - Finds the lowest common ancestor of two nodes.
 * @first: Pointer to the first node.
 * @second: Pointer to the second node.
 *
 * Return: NULL if no common ancestors else return common ancestor.
 */

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	binary_tree_t *prt1, *prt2;

	if (!first || !second)
		return (NULL);

	if (first == second)
		return ((binary_tree_t *)first);

	prt1 = first->parent, prt2 = second->parent;
	if (first == prt2 || !prt1 || (!prt1->parent && prt2))
		return (binary_trees_ancestor(first, prt2));
	else if (prt1 == second || !prt2 || (!prt2->parent && prt1))
		return (binary_trees_ancestor(prt1, second));
	return (binary_trees_ancestor(prt1, prt2));
}

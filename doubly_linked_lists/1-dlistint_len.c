#include "lists.h"
/**
 * dlistint_len - count all the elements of a dlistint_t list
 * @h: doubly linked list node
 * Return: the number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;

	for (; h; h = h->next, nodes++)
		;
	return (nodes);
}

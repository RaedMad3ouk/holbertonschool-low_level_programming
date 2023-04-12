#include "lists.h"
#include <stdlib.h>

/**
  * insert_dnodeint_at_index- insert at given index from a doubly linked list
  * @h: start of doubly linked list
  * @idx: index
  * @n: value to insert
  * Return: return the node that was inserted
  */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *new, *hold = *h;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n; /*value to insert*/

	/* zid mel louel */
	if (idx == 0)
	{
		new->next = *h;
		new->prev = NULL;

		if (*h)
			(*h)->prev = new;

		*h = new;

		return (new);
	}

	for (i = 0; hold; i++, hold = hold->next)
		if (i == idx - 1)
		{
			new->next = hold->next;
			if (new->next)
				new->next->prev = new;
			new->prev = hold; /*0*/
			hold->next = new; /*add*/

			return (new);
		}
	return (NULL);
}

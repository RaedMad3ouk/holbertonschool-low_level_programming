#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_list - prints all elements of list_t list
 * @h: linked list
 * Return: number of nodes in linked list
 */

size_t print_list(const list_t *h)
{
	int i;

	if (h == NULL)
		return (0);

for (i = 1; h->next != NULL; i++)
{
	if (h->str == NULL)
	{
		printf("[%d] %s\n", h->len, "(nil)");
	}
	else
		printf("[%d] %s \n", h->len, h->str);
	h = h->next;

}
	printf("[%d] %s \n", h->len, h->str);
	return (i);
}

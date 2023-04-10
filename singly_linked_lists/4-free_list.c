#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees list_t
 * @head: linked list , list_t
 */

void free_list(list_t *head)
{
	
	while (head != NULL)
	{
		
		head = head->next;
		free(head->str);
		free(head);
	}
}
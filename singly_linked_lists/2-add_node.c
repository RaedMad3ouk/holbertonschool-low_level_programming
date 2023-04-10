#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strlen - size of string
 * @str: string to get size of
 * Return: size of string
 */
int _strlen(const char *str)
{
	int i;

	for (i = 0; str[i]; i++)
		;

	return (i);
}
/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: first node
 * @str: needs to be duplicated
 * Return: new list_t
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;
	char *string = strdup(str);

	if (!string)
		return (NULL);

	newnode = malloc(sizeof(list_t));
	if (!newnode)
	{
		free(string);
		return (NULL);
	}
	newnode->str = string;
	newnode->len = _strlen(string);
	newnode->next = *head;

	*head = newnode;
	return (newnode);
}

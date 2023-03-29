#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - copy the string given
 * @str: string to copy
 * Return: returns a pointer to the copy, or NULL if it fails
 */

char *_strdup(char *str)
{
unsigned int i, len;
char *x;

if (!str)
	return (NULL);

for (len = 0; str[len]; len++)
{
	len++;
	x = malloc(len * sizeof(char));
}
	if (!x)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		x[i] = str[i];
	}
	return (x);
}

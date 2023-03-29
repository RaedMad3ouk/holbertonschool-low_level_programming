#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an arry of chars
 * @size: size of array
 * @c: char
 * Return: returns a pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{

	char *x;
	int i = 0;

	if (size == 0)
	return (NULL);

x = (char *)malloc(size * siezof(char));

		if (x == 0)
			return (NULL);

		for (; i < size; i++)
		x[i] = c;

		return (x);
}

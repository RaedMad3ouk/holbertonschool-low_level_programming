#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an arry of chars, and initializes it with a char
 * @size: size of array
 * @c: specific char
 * Return: returns a pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *x;
	unsigned int i;

	if (size == 0)
		return (NULL);

	x = (char *)malloc(size * sizeof(char));

	if (x == 0)
		return (NULL);

	for (i = 0; i < size; i++)
		x[i] = c;

	return (x);
}

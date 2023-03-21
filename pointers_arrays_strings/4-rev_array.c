#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: int array
 * @n: number of elements in the array
 * Return: concatenated string
 */

void reverse_array(int *a, int n)
{
	int i;
	int raed;

	for (i = 0; i < n--; i++)
	{
		raed = a[i];
		a[i] = a[n];
		a[n] = raed;
	}
}

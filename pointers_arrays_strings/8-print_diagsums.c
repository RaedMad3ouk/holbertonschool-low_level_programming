#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - add diagonal lines of a square matrix
 * @a: square
 * @size: size of square
 */

void print_diagsums(int *a, int size)
{
	int i = 0, j = size - 1, d1 = 0, d2 = 0;
	int *p = a;

	for (; i <= size * size; i += (size + 1), j += (size - 1))
	{
		d1 += *(p + i);
		d2 += *(p + j);
	}
	printf("%d, %d\n", d1, d2);
}

/**
 * print_square - a function that prints a square
 *@size: int
 */

#include "main.h"

void print_square(int size)
{
	int j, i;

	if (size > 0)
	{
		for (j = 0; j < size; j++)
		{
			for (i = 0; i < size; i++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}

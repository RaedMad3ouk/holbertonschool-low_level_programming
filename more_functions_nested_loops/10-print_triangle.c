/**
 * print_triangle - a function that prints a triangle
 *@size: int
 */

#include "main.h"

void print_triangle(int size)
{
	int i, j, b;

	if (size <= 0)
	{
		_putchar('\n');
	}

	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = 1; j < size - i; j++)
			{
				_putchar(' ');
			}

			for (b = 0; b <= i; b++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}


#include "main.h"

/**
* more_numbers - print
*
* Return: 10 times the numbers 0 to 14
*/

void more_numbers(void)
{
	int a, b;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 14; b++)
		{
			if (b > 9)
				_putchar((b / 10) + '0');
			_putchar((b % 10) + '0');
		}
	_putchar('\n');
	}
}

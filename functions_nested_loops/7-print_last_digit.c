#include "main.h"

/**
* print_last_digit - prints last digit
* @g: int
* Return: last digit
*/
int print_last_digit(int num)
{
	int d;

	d = (num % 10);

	if (d < 0)
	{
		d = (-1 * d);
	}

	_putchar(d + '0');
	return (d);
}

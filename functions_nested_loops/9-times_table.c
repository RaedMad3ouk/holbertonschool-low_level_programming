#include "main.h"

/**
 * times_table -  a function that prints the 9 times table
 * tsarbis = row, da3k = column, chaos = result
 * Return: times table
 *
 */

void times_table(void)
{

int tsarbis, da3k, chaos;



	for (tsarbis = 0; tsarbis <= 9; tsarbis++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (da3k = 1; da3k <= 9; da3k++)
		{
			chaos = (tsarbis * da3k);
			if ((chaos / 10) > 0)
			{
				_putchar((chaos / 10) + '0');
			}
			else
			{
				_putchar(' ');
			}
			_putchar((chaos % 10) + '0');

			if (da3k < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}

}



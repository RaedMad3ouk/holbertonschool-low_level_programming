#include "main.h"
#include <string.h>

/**
 * puts_half - print second half of a string
 * @str: string
 * Return: second half
 */

void puts_half(char *str)
{
	int len = strlen(str);
	int i, n;

	if (len % 2 == 0)
		n = len / 2;
	else
		n = (len + 1) / 2;
	i = n - 1;
	while (i < len)
	{
		i++;
		_putchar(str[i]);
	}
	_putchar('\n');
}

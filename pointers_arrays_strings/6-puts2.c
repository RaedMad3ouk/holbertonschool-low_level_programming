#include "main.h"
#include <string.h>

/**
 * puts2 - a function that prints evrey other line
 * @str: array of string
 * Return: none
 */

void puts2(char *str)
{
	int i;
	int j = strlen(str);

	for (i = 0; i < j; i += 2)
	{

		_putchar(str[i]);
	}
	_putchar('\n');
}

#include "main.h"
#include <string.h>
/**
 * print_rev - prints a string in reverse
 * @s: char
 * Return: reversed string
 */

void print_rev(char *s)
{
	int i;
	int n = strlen(s);
		for (i = n; i >= 0 ; i--)
	{
			_putchar(s[i]);
	}
_putchar('\n');
}


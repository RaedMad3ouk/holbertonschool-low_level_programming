#include "main.h"
#include <string.h>

void puts_half(char *str)
{
	int j = strlen(str);
	int i, n;

	if (j % 2 == 0)
		n = j / 2;
	else
		n = (j + 1) / 2;
	for (i = n; i < n; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
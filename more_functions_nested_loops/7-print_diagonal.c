#include "main.h"

/**
 * print_diagonal - prints a diagonal
 *@n: int
 * Return: diagonal line.
 */
void print_diagonal(int n)
{

int i, b;

if (n > 0)

for (i = 0; i < n; i++)
{

for (b = 0; b < i; b++)

_putchar(' ');
_putchar('\\');
_putchar('\n');

}

else

_putchar('\n');

}

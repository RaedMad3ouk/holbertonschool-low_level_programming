#include "main.h"
/**
 * print_last_digit - prints the last digit
 *
 * @r: int
 * Return: last digit of a number
 */

int print_last_digit(int r)
{
int last = r % 10;
if (last < 0)

last = -last;

_putchar('0' + last);

return (last);

}



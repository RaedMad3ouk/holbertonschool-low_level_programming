#include <stdio.h>

/**
 * print_last_digit - prints the last digit
 *
 * @num: int
 * Return: last digit of a number
 */

int print_last_digit(int num)
{
int last_digit = num % 10;

if (last_digit < 0)

last_digit = -last_digit;

putchar('0' + last_digit);

return (last_digit);

}



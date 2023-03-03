#include <stdio.h>

/**
 * _islower - Entry point
 *
 * @c: char
 * Return: Always 0 (Success)
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}

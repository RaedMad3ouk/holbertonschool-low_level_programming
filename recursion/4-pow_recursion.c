#include "main.h"

/**
 * _pow_recursion - get x to the power of y
 * @x: int
 * @y: int
 * Return: x power y
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);

	else if (y < 0)
		return (-1);

	return (x * _pow_recursion(x, --y));
}

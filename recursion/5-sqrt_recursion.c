#include "main.h"

/**
 * raed_sqrt - finds the root of n
 * @n: int
 * @x: int
 * Return: root of n
*/

int raed_sqrt(int n, int x)
{
	if (x * x > n)
		return (-1);

	if (x * x == n)
		return (x);
	return (raed_sqrt(n, x + 1));
}


/**
 * _sqrt_recursion - gives the root of n
 * @n: int
 * Return: root of n
*/

int _sqrt_recursion(int n)
{
	int x = 0;

		if (n == 1)
			return (1);
		return (raed_sqrt(n, x));
}

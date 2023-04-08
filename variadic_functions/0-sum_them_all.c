#include <stdarg.h>

/**
 * sum_them_all - sum of all its parameters
 * @n: number of parameters
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list x;
	int sum = 0;
	unsigned int i;

	if (!n)
		return (0);

	va_start(x, n);

	for (i = 0; i < n; i++)
		sum += va_arg(x, int);

	va_end(x);

	return (sum);
}

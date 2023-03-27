/**
 * raed - finds prime function
 * @n: int
 * @x: int x
 * Return: 0 if not prime  1 if prime
 */

int raed(int n, int x)
{
	if (x > 9)
		return (1);

	else if (n % x != 0)
		return (raed(n, ++x));

	return (0);
}

/**
 * is_prime_number - checks if n is prime
 * @n: int
 * Return: 0 if not prime 1 if prime
 */

int is_prime_number(int n)
{
	if (n == 1 || n == -1 || n == 0)
		return (0);
	return (raed(n, 2));
}

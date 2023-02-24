#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;
	 int a;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	a = (n % 10);
	printf("Last digit of %i is %i ", n, a);
	if (n == 0)
	printf("and is 0");
	if else(n > 5)
	printf("and is greater than 5");
	else
	printf("and is less than 6 and not 0");
	return (0);
}

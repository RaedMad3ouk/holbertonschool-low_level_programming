#include "main.h"

/**
 * flip_bits - determine how many bits to flip to get from one num to another
 * @n: number
 * @m: number2
 * Return: how many bits differ
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int check = 0;
	unsigned long int count;

	count = n ^ m;

	do {
		check += (count & 1);
		count >>= 1;
	} while
		(count > 0);

	return (check);
}

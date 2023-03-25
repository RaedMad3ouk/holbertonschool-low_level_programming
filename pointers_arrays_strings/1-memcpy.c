#include "main.h"

/**
 * _memcpy - memset function
 * @dest: start point of string to change
 * @src: value that will replace
 * @n: number of bytes
 * Return: changed pointer
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *dest1 = dest;
	char *src1 = src;

	while (n != 0)
	{
		*dest1 = *src1;
		dest1++;
		src1++;
		n--;
	}
	return (dest);
}

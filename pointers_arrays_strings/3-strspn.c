#include "main.h"

/**
 * _strspn - Entry point
 * @s: input
 * @accept: input
 * Return: Always 0 (Success)
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0, x = 0, i = 0;


	for (x = 0; s[x] != '\0' && x == count; x++)
		for (i = 0; accept[i] != '\0'; i++)

			if (s[x] == accept[i])
				count++;

	return (count);
}

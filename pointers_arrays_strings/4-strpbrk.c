#include "main.h"

/**
 * _strpbrk - locates a character in a string
 * @s: pointer
 * @accept: character
 * Return: NULL
 */

char *_strpbrk(char *s, char *accept)
{
	char *x = s - 1;
	int i;

	do {
		x++;
		for (i = 0; accept[i] != '\0'; i++)
			if (*x == accept[i])
				return (x);
	}
while (*x != '\0');

	return (0);
}

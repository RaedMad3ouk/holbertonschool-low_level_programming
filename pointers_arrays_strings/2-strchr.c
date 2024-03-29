#include "main.h"

/**
 * _strchr - Entry point
 * @s: string
 * @c: string
 * Return: Always 0 (Success)
 */

char *_strchr(char *s, char c)
{
	char *s1 = s - 1;

	do {
		s1++;
		if (*s1 == c)
			return (s1);
	}

	while (*s1 != '\0');

	return (0);
}

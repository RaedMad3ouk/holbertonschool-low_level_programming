#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 * Return: difference
 */

int _strcmp(char *s1, char *s2)
{
	int j = 0;

	while (*(s1 + j) != '\0' || *(s2 + j) != '\0')
	{
		if (*(s1 + j) != *(s2 + j))
			return (*(s1 + j) - *(s2 + j));
		j++;
	}
	return (0);
}

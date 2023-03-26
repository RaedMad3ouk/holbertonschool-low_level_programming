#include "main.h"

/**
 * _strstr - locates a character in a string
 * @haystack: pointer
 * @needle: character we search for
 * Return: NULL or pointer
 */

char *_strstr(char *haystack, char *needle)
{
	char *s = haystack - 1;
	int len, j;

	for (len = 0; *(needle + len); len++)
		;

	do {
		s++;

		for (j = 0; j < len; j++)

			if (*(s + j) != *(needle + j))
				break;

		if (j == len)
			return (s1);
	} while (*s != '\0');

	return (0);
}

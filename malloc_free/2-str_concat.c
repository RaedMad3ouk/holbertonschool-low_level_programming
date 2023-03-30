#include <stdlib.h>
#include "main.h"

/**
* str_concat - concatenates two strings
* @s1: char
* @s2: char
* Return: pointer to concatenated string
*/


char *str_concat(char *s1, char *s2)
{

char *x;
int i = 0, j = 0, len1 = 0, len2 = 0;


	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

		for (; *(s1 + i) != '\0'; i++)
			len1++;
		for (; *(s2 + j) != '\0'; j++)
			len2++;
		len2++;

x = malloc(sizeof(char) * (len1 + len2));

	if (x == NULL)
		return (NULL);
		i = 0, j = 0;

		for (; i < len1; i++)
			*(x + i) = *(s1 + i);
			i++;

	for (; j < len2; j++)
		*(x + i) = *(s2 + j);
		i++;

	return (x);
}

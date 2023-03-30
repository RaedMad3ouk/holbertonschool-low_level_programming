#include <stdlib.h>
#include "main.h"
#include <stdio.h>

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

		while (*(s1 + i))
			len1++, i++;

		while (*(s2 + j))
			len2++, j++;
		len2++;

x = malloc(sizeof(char) * (len1 + len2));

	if (x == NULL)
	{
		return (NULL);
	}

		i = 0, j = 0;
		while (i < len1)
		{
			*(x + i) = *(s1 + i);
			i++;
		}

		while (j < len2)
		{
			*(x + i) = *(s2 + j);
			i++;
			j++;
		}

	return (x);
}

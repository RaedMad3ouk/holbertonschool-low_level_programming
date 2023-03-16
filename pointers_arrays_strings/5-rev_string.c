#include "main.h"
/**
 * rev_string - a function that reverses a string
 * @s: char
 * Return: none
 */

void rev_string(char *s)
{
	int i = 0, j = strlen(s) - 1;
	char k;

	while (i < j)
	{
		k = s[i];
		s[i] = s[j];
		s[j] = k;
		i++;
		j--;
	}
}

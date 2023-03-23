#include "main.h"
#include <stdio.h>
/**
 * cap_string - capitalize words
 * @a: string
 * Return: pointer to string
 */

char *cap_string(char *a)
{
	int i = 0, j = 0, foundSeparator = 0;
	char *seperators = ",;.!?\"(){} \n\t";

	if (a[i] >= 'a' && a[i] <= 'z')
		a[i] -= 32;

	for (i = 0; a[i] != '\0'; i++)
	{
		for (j = 0; seperators[j] != '\0'; j++)
		{
			if (a[i] == seperators[j] && !(a[i + 1] >= '0' && a[i + 1] <= '9'))
			{
				foundSeparator = 1;
			}
		}
		if (foundSeparator == 1 && a[i] >= 'a' && a[i] <= 'z')
		{
			a[i] -= 32;
			foundSeparator = 0;
		}
		else if (foundSeparator == 1 && a[i] >= 'A' && a[i] <= 'Z')
		{
			foundSeparator = 0;
		}
	}
	return (a);
}

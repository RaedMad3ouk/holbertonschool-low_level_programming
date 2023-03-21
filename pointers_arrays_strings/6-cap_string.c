#include "main.h"

/**
 * cap_string - capitalize words
 * @a: string
 * Return: pointer to string
 */

char *cap_string(char *a)
{
	int i, j;
	char *seperators = ",;.!?\"(){} \n\t";

	for (i = 0; *(a + i) != '\0'; i++)
	{
		if (*(a + i) >= 'a' && *(a + i) <= 'z')
			for (j = 0; *(seperators + j) != '\0'; j++)
			{
				if (*(a + i - 1) == *(seperators + j))
				{
					*(a + i) -= 32;

				}
				else if (i == 0)
				{
					*(a + i) -= 32;

				}
			}
	}
	return (a);
}

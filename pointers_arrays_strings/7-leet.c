#include "main.h"
/**
 * leet - take strings and capitalize words
 * @a: string
 * Return: capitalized words
 */

char *leet(char *a)
{
	int i, x;
	char alpha[] = "aAeEoOtTlL";
	char num[] = "4433007711";

	for (i = 0; a[i] != '\0'; i++)
	{
		for (x = 0; alpha[x]; x++)
			if (alpha[x] == a[i])
			{
				a[i] = num[x];
				break;
			}
	}
	return (a);
}

#include "main.h"
/**
 * _strncpy - copy two strings only taking n bytes from src
 * @dest: string
 * @src: string
 * @n: string
 * Return: concatenated string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}

#include "main.h"
/**
* _strcpy - a functuin that copies string
* @dest: string
* @src: string
* Return: returns string
*/
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)

	{
		dest[i] = src[i];
	}

return (dest);

}

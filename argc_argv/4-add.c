#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * check - function that checks array of characters for integers
 * @s: array of characters
 * Return: 0 if successful, -1 if fails
 */
int check(char *s)
{
	int num;
	char *p;

	num = strtol(s, &p, 10);
	if (p[0])
		return (-1);
	return (num);
}

/**
 * main - function that multiplies two numbers
 * @argc: the size of the argv array, the number of command line arguments
 * @argv: an array containing the program command line arguments
 * Return: 0 if successful
 */
int main(int argc, char *argv[])
{
	int i, sum, ch;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1, sum = 0; i < argc; i++)
	{
		ch = check(argv[i]);
		if (ch > -1)
		{
			if (INT_MAX - sum > ch)
				sum += ch;
			else
				ch = -1;
		}
		if (ch < 0)
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}

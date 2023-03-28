#include <stdio.h>
#include <stdlib.h>

/**
 * main - function that multiplies two numbers
 * @argc: the size of the argv array,$
 * @argv: an array containing the program command line arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int a, b;

	if (argc != 3)
		printf("Error\n");
	else
	{
		a = strtol(argv[1], 0, 10);
		b = strtol(argv[2], 0, 10);
		printf("%d\n", a * b);
	}
	return (0);
}

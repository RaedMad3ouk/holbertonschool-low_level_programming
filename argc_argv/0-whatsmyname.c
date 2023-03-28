#include <stdio.h>

/**
 * main - function that prints its name followed by a new line
 * @argc: the size of the argv array
 * @argv: an array containing the program command line arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	(void)argc;
	return (0);
}

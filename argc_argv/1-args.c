#include <stdio.h>

/**
 * main - function that prints number of arguments followed by a new line
 * @argc: the size of the argv array
 * @argv: an array containing the program command line arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	(void)argv;
	return (0);
}

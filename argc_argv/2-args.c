#include <stdio.h>

/**
 * main - function that prints all arguments it receives
 * @argc: the size of the argv array
 * @argv: an array containing the program command
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i = 0;

	for (; i < argc; i++)

		printf("%s\n", argv[i]);
	return (0);
}

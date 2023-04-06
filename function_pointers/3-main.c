#include "3-calc.h"
#include <stdio.h>

/**
 * main - calculator
 * @argc: size of argv
 * @argv: array of arguments
 * Return: answer
 */

int main(int argc, char *argv[])
{
	int i, j;
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	i = atoi(argv[1]);
	j = atoi(argv[3]);
	func = get_op_func(argv[2]);

	if (get_op_func(argv[2]))
		printf("%d\n", get_op_func(func), (i), (j));
	else
	{
		printf("Error\n");
		exit(99);
	}
	return (0);
}






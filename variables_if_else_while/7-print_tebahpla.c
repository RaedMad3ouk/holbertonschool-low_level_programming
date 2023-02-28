#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char low = 'z';

	while (low >= 'a')
	{
		putchar(low);
	}
	putchar('\n');
	return (0);
}

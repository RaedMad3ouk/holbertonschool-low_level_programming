#include "main.h"
#include <stdio.h>

/**
* print_array - prints number of elements
* @a: array
* @n: int
* Return: elements
*/

void print_array(int *a, int n)
{

int i;
for (i = 0; i < n; i++)
{
	printf("%d", a[i]);
	printf("; ");
}

}

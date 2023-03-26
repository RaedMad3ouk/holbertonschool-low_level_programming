#include "main.h"

/**
 * print_chessboard - print chessboard
 * @a:array
 */

void print_chessboard(char (*a)[8])
{
	int j = 0;
	int i = 0;

	for (j = 0; j < 8; j++) 
	{
		_putchar(a[i][j]);
		
		if (j == 7 && i < 7)
		{
			i++;
			j = -1;
			_putchar('\n');
		}
	}
	_putchar('\n');
}
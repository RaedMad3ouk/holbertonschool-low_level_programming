#include "main.h"

/**
 * _isalpha - looks for alphabet char
 * @c: character
 * Return: 1 if  alphabet char
 */


int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))

{

return (1);

}

else
{

return (0);

}

_putchar('\n');

}

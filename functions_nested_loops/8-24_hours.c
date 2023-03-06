#include "main.h"

/**
 * jack_bauer - function that prints every minute of the day
 * sa3at = hour, d9aye9 = minutes
 * / 10 allows second digit to rotate
 *for loop breaks 9bal 24 se3a
 */

void jack_bauer(void)
{

int sa3at, d9aye9;


for (sa3at = 0; sa3at < 24; sa3at++)
for (d9aye9 = 0; d9aye9 < 60; d9aye9++)
{

{

_putchar((sa3at / 10) + '0');
_putchar((sa3at % 10) + '0');
_putchar(':');
_putchar((d9aye9 / 10) + '0');
_putchar((d9aye9 % 10) + '0');
_putchar('\n');

}

}
}

#include "main.h"
#include <stdio.h>
/**
 * more_numbers - to write the numbers from 0 to 14 14 times.
 * Return: Always 0.
 */

void more_numbers(void)
{
int x;
int y;

for (y = 0; y <= 14 ; y++)
{
for (x = 0; x <= 14 ; x++)
{
if (x >= 10)
{
_putchar(1 + '0');
}
_putchar(x % 10 + '0');
}
_putchar('\n');
}
return;
}

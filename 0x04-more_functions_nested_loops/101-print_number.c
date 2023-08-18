#include"main.h"
/**
 * print_number - prints an given integer number
 * @n: is the number of integers
 * Return: void
 */

void print_number(int n)
{
int x;
unsigned int y;

x = 1000000000;

if (n == 0)
{
_putchar(0 + '0');
return;
}


if (n < 0)
{
_putchar(45);
y = -n;
}
else
{
y = n;
}

while (y / x == 0)
{
x = x / 10;
}

while (x != 1)
{
_putchar(y / x + '0');
y = y % x;
x = x / 10;
}

_putchar(y + '0');

return;
}

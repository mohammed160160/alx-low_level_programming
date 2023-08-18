#include"main.h"
/**
 * print_number - prints an given integer number
 * @n: is the number of integers
 * Return: void
 */

void print_number(int n)
{
int x;

x = 1000000000;

if (n < 0)
{
_putchar(45);
n = -n;
}

if (n == 0)
{
_putchar(0 + '0');
return;
}

while (n / x == 0)
{
x = x / 10;
}

while (x != 1)
{
_putchar(n / x + '0');
n = n % x;
x = x / 10;
}

_putchar(n + '0');

return;
}

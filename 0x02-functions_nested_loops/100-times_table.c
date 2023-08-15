#include "main.h"

/**
 * print_times_table - writes the time table from 0 to n
 * @n: the number of the time table
 * Return: Always 0.
 */

void print_times_table(int n)
{
	int x;
	int y;
	int z;

	if (n <= 15 && n >= 0)
	{
	for (x = 0; x <= n ; x++)
	{
	_putchar('0');
	for (y = 1; y <= n ; y++)
	{
	z = x * y;
	_putchar(',');
	_putchar(' ');
	if (z <= 9)
	{
	_putchar(' ');
	_putchar(' ');
	_putchar(z + '0');
	}
	else if (z <= 99 && z >= 10)
	{
	_putchar(' ');
	_putchar(z / 10 + '0');
	_putchar(z % 10 + '0');
	}
	else if (z >= 100)
	{
	_putchar(z / 100 + '0');
	_putchar(z % 100 / 10 + '0');
	_putchar(z % 100 % 10 + '0');
	}
	}
	_putchar('\n');
	}
	}
	return;
	}

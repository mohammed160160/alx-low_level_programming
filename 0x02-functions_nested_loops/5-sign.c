#include "main.h"

/**
 * print_sign - checks if the char is positive, negative or zero
 * @n: the value the checker do
 * Return: 1 if positive, -1 if negative , 0 if zero
 */
int print_sign(int n)
{
if (n > 0)
	{
	_putchar('+');
	return (1);
	}
else if (n < 0)
	{
	_putchar('-');
	return (-1);
	}
else
	{
	_putchar('0');
	return (0);
	}
	}

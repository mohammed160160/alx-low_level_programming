#include "main.h"
#include <stdio.h>
/**
 * print_line - to write a line equal to the number n
 * @n : the length of the line
 * Return: Always 0.
 */

void print_line(int n)
	{
	int x;

	for (x = 1; x <= n; x++)
	{
	_putchar(95);
	}
	_putchar('\n');
	return;
	}

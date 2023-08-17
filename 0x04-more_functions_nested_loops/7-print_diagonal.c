#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - to write a diagonal line equal to the number n
 * @n : the length of the line
 * Return: Always 0.
 */

void print_diagonal(int n)
	{
	int x;
	int y;

	for (y = 1; y < n + 1; y++)
	{
	for (x = 1; x < y; x++)
	{
	_putchar(' ');
	}
	_putchar(92);
	_putchar('\n');
	}
	_putchar('\n');
	return;
	}

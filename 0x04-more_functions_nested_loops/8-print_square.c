#include "main.h"
#include <stdio.h>
/**
 * print_square - to make a square with side equal size
 * @size : the dimensions of the square
 * Return: Always 0.
 */

void print_square(int size)
	{
	int x;
	int y;

	for (x = 1; x <= size; x++)
	{
	for (y = 1; y <= size; y++)
	{
	_putchar(35);
	}
	_putchar('\n');
	}
	if (x <= 0)
	{
	_putchar('\n');
	}
	return;
	}

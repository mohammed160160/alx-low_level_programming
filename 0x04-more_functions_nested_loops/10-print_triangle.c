#include "main.h"
#include <stdio.h>

/**
 * print_triangle - to draw a triangle with length size
 * @size : the length of the triangle
 * Return: Always 0.
 */

void print_triangle(int size)
	{
	int x;
	int y;
	int z;

	for (x = 1; x <= size; x++)
	{
	for (y = size - x; y > 0; y--)
	{
	_putchar(' ');
	}
	for (z = 1; z <= x; z++)
	{
	_putchar(35);
	}
	_putchar('\n');
	}
	if (size <= 0)
	{
	_putchar('\n');
	}
	return;
	}

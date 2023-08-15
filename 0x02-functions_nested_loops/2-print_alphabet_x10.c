#include "main.h"
#include <stdio.h>
/**
 * main - to write the alphabet from a to z
 *
 * Return: Always 0.
 */

void print_alphabet_x10(void)
	{
	int x;
	int y;

	for (y = 0; y <= 9; y++)
	{
	x = 97;	
	while (x <= 122)
	{
	_putchar(x);
	x++;
	}
	_putchar('\n');
	}
	return;
	}

int main(void)
	{
	print_alphabet_x10();
	return (0);
	}

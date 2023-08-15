#include "main.h"
#include <stdio.h>
/**
 * print_alphabet - to write the alphabet from a to z
 * Return: Always 0.
 */

void print_alphabet(void)
	{
	int x = 97;

	while (x <= 122)
	{
	_putchar(x);
	x++;
	}
	_putchar('\n');
	return;
	}

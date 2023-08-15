#include "main.h"

/**
 * print_to_98 - writes from the number given to 98
 * @n: defines the starting points
 * Return: Always 0.
 */
void print_to_98(int n)
	{
	while (n != 98)
	{
	if (n < 98)
	{
	for (n = n; n < 98; n++)
	{
	printf("%d, ", n);
	}
	}
	else if (n > 98)
	{
	for (n = n; n > 98; n--)
	{
	printf("%d, ", n);
	}
	}
	}
	printf("98\n");
	return;
	}

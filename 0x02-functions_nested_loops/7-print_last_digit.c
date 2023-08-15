#include "main.h"

/**
 * print_last_digit - checks if the char is positive, negative or zero
 * @n: the value the checker do
 * Return: the value of last digit
 */

int print_last_digit(int n)
	{
	int ls;

	ls = n % 10;
	if (n < 0)
	{
	ls = -ls;
	}
	return (ls);
	}

#include "main.h"

/**
 * print_last_digit - checks if the char is positive, negative or zero
 * @n: the value the checker do
 * Return: the value of last digit
 */

int print_last_digit(int n)
	{
	int ls;
	int lsls;

	ls = n % 10;
	lsls = ls * 11;
	if (n < 0)
	{
	return (-lsls);
	}
	else
	{
	return (lsls);
	}
	}

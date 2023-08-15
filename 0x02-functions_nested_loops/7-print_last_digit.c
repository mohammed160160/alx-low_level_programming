#include "main.h"

/**
 * print_last_digit - checks if the char is positive, negative or zero
 * @n: the value the checker do
 * Return: the value of last digit
 */

int print_last_digit(int n)
	{
	if (n < 0)
	{
	return (-n);
	}
	else
	{
	return (n);
	}
	}

#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */

int main(void)
	{
	int n;

	n = add(89, 9);
	printf("%d\n", n);
	return (0);
	}
/**
 * add - adds 2 numbers
 * @a: first integer
 * @b: second integer
 * Return: a+b
 */

int add(int a, int b)
	{
	return (a + b);
	}

#include <stdio.h>
#include <stdlib.h>
#include "calc.h"

/**
 * op_add - this operation is to add 2 integers
 * @a: The first integer
 * @b: The second integer
 * Return: The value of adding a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - this operation is to subtract 2 integers
 * @a: The first integer
 * @b: The second integer
 * Return: The value of subtracting a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - this operation is to multiply 2 integers
 * @a: The first integer
 * @b: The second integer
 * Return: The value of multiplying a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - this operation is to divide 2 integers
 * @a: The first integer
 * @b: The second integer
 * Return: The value of dividing a and b without the remainder
 */

int op_div(int a, int b)
{

if (b == 0)
{
	printf("Error\n")
	exit(100);
}

return (a / b);
}

/**
 * op_mod - this operation is to find the remainder of dividing 2 integers
 * @a: The first integer
 * @b: The second integer
 * Return: The value of remainder of dividing a and b
 */

int op_mod(int a, int b)
{

if (b == 0)
{
	printf("Error\n")
	exit(100);
}

return (a % b);
}



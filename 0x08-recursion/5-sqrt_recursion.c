#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion - returns the square root of the number n
 * squareroot - check if the number has a square root.
 * @n: The number wanting to finding the square root of.
 * Return: if it doesnt have a natural root return -1 else return the
 * square root
 */
int _sqrt_recursion(int n)
{
int x = 1;

if (n < 0)
{
return (-1);
}

if (n == 0)
{
return (0);
}

x = squareroot(n, x);
return (x);
}

/**
* squareroot - check if the number has a square root.
* @n: The number wanting to finding the square root of.
* @y: The value of the rising counter for n.
* Return: The value of root
*/

void squareroot(int n, int y)
{

if (n / y == y)
{
return (y);
}

if (n == y)
{
return (-1);
}

y++;
squareroot(n, y);

}

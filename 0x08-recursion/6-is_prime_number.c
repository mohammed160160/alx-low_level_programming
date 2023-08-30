#include "main.h"
#include <stdio.h>

/**
 * is_prime_number - A program that checks if the number is prime or not
 * @n:The number that goes into the function
 * Return: Always 0.
 */


int is_prime_number(int n)
{
int x = 2;

if (n <= 1)
{
return (0);
}

x = primenumber(n, x);
return (x);

}


/**
* primenumber - check if the number is a prime number or not
* @n: The number wanting to finding the square root of.
* @y: The value of the rising counter for n.
* Return: The value of root
*/

int primenumber(int n, int y)
{

if (y != n && n % y == 0)
{
return (0);
}

if (y == n && n % y == 0)
{
return (1);
}

y++;
return (primenumber(n, y));
}

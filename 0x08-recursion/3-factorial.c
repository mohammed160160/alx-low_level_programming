#include "main.h"
#include <stdio.h>

/**
 * factorial - This function is to calculate the factorial of a number.
 * @n: The number to find the factorial to.
 * Return: (-1) if less than 0, (1) if the factorial is 0 and for rest
 * of numbers the return is their factorial value.
 */
int factorial(int n)
{

if (n < 0)
{
return (-1);
}

if (n == 0)
{
return (1);
}

return (n * factorial(n - 1));
}

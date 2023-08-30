#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion - This function is similar to the (pow) function which gives
 * the number (x) to the power of (y)
 * @x: The number that is applied to
 * @y: The power the number is multiplied by
 * Return: -1 if y less than 0 and the power if more
 */

int _pow_recursion(int x, int y)
{

if (y < 0)
{
return (-1);
}

if (y == 0)
{
return (1);
}

return (x * _pow_recursion(x, y - 1));
}

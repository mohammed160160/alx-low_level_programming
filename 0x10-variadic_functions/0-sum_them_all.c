#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
 * sum_them_all - writes the sum of all numbers in the function
 * @n: number of arguments in the parameter
 * @...: The arguments
 * Return: The sum of arguments
 */

int sum_them_all(const unsigned int n, ...)
{
unsigned int x = 0;
int y = 0;
va_list xyz;

if (n == 0)
{
return (0);
}


va_start(xyz, n);

for (x = 0; x < n; x++)
{
y += va_arg(xyz, int);
}

va_end(xyz);

return (y);
}

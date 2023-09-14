#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
 * print_strings - Prints any number of argument strings with a specific
 * separator between each string
 * @separator: The separator between each string
 * @n: The number of arguments in the va
 * @... : An argument consisting of multiple strings
 * Return: Nothing since it's a print function
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int x = 0;
va_list xyz;
char *y;

va_start(xyz, n);

for (x = 0; x < n; x++)
{

y = va_arg(xyz, char *);

if (y != NULL)
{
printf("%s", y);
}
else
{
printf("(nil)");
}

if (separator != NULL && x != n - 1)
{
printf("%s", separator);
}

}
va_end(xyz);
printf("\n");
}



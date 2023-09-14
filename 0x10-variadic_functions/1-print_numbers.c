#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
 * print_numbers - Prints the numbers in the arguments in a row with
 * the selected seperator
 * @separator: the seperator between the numbers
 * @n: The number of integers passed in the argument
 * @...: Arguments consisting of a number (n) of integers
 * Return: Nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int x = 0;
va_list xyz;


if (n <= 0)
{
return;
}

va_start(xyz, n);



for (x = 0; x < n; x++)
{
printf("%i", va_arg(xyz, int));

if (separator != NULL && x != n - 1)
{
printf("%s", separator);
}

if (x ==  n - 1)
{
printf("\n");
}


}

va_end(xyz);

}

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "variadic_functions.h"
/**
 * print_all - prints all argument in the format specified
 * @*: to ensure format doesnt change
 * @format: The format for each argument
 * @...: The arguments
 * Return: Nothing since it's a print function
 */
void print_all(const char * const format, ...)
{
va_list allvalue;
int left = 0, up = 0;
char *right;

va_start(allvalue, format);
while (format[up] && format)
{
left = 0;

	switch (format[up])
	{
	case 'i':
	printf("%i", va_arg(allvalue, int));
	left++;
	break;
	case 'f':
	printf("%f", va_arg(allvalue, double));
	left++;
	break;
	case 'c':
	printf("%c", va_arg(allvalue, int));
	left++;
	break;
	case 's':
	right = va_arg(allvalue, char *);
	print_string(right);
	left++;
	break;
	default:
	break;
	}

if (format[up + 1] != '\0' && left == 1)
{ printf(", "); }
up++;

}

va_end(allvalue);
printf("\n");
}


/**
 * print_string - prints the different options for string
 * @s: The string
 * Return: Nothing since it's a print function
 */


void print_string(char *s)
{
if (s == NULL)
{
printf("(nil)");
return;
}
printf("%s", s);
}

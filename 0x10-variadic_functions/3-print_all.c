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
int left = 0, up = 0, down = 0;
char print[] = "scif";

va_start(allvalue, format);
while (format[up] != '\0')
{
down = 0;
left = 0;
	while (down < 4)
	{
	if (print[down] == format[up])
	{
		left++;
		switch (format[up])
		{
		case 'i':
		printf("%i", va_arg(allvalue, int));
		break;
		case 'f':
		printf("%f", va_arg(allvalue, double));
		break;
		case 'c':
		printf("%c", va_arg(allvalue, int));
		break;
		case 's':
		printf("%s", va_arg(allvalue, char *));
		break;
		}
	break;
	}
	down++;
}
if (format[up + 1] != '\0' && left == 1)
{ printf(", "); }
up++;
}
va_end(allvalue);
printf("\n");
}

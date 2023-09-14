#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>
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
int up = 0, down = 0;
void *space;
printer print[] = {{"s", stringprint}, {"c", characterprint}, {"i", integerprint}
, {"f", floatprint}};
va_start(allvalue, format);
while (format[up] != '\0')
{
	down = 0;
	while (print[down].c[0] != '\0')
	{
		if (print[down].c[0] == format[up])
		{
			switch (format[up])
			{
				case 'i': space = va_arg(allvalue, int *);break;
				case 'f': space = va_arg(allvalue, float *);break;
				case 'c': space = va_arg(allvalue, char *);break;
				case 's': space = va_arg(allvalue, char *);break;
			}
			print[down].f(space);
			break;
		}
		down++;
	}
up++;
}
va_end(allvalue);
printf("\n");
}
/**
 * floatprint - prints a float
 * @x: A void pointer to the location
 * Return: Nothing since it's a print function
 */
void floatprint(void *x)
{
printf("%f", *(float *)x);
}
/**
 * stringprint - prints a string
 * @x: A void pointer to the location
 * Return: Nothing since it's a print function
 */
void stringprint(void *x)
{
printf("%s", (char *)x);
}
/**
 * characterprint - prints a character
 * @x: A void pointer to the location
 * Return: Nothing since it's a print function
 */
void characterprint(void *x)
{
printf("%c", *(char *)x);
}
/**
 * integerprint - prints an integer
 * @x: A void pointer to the location
 * Return: Nothing since it's a print function
 */
void integerprint(void *x)
{
printf("%i", *(int *)x);
}

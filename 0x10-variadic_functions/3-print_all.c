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
char c;
char* d;
float b;
va_list allvalue;
int a,left = 0,up = 0, down = 0;
printer print[] = {{"s", stringprint}, {"c", characterprint}, {"i", integerprint}
, {"f", floatprint}};
va_start(allvalue, format);
while (format[up] != '\0')
{
down = 0;
left = 0;
	while (down < 4)
	{
		if (print[down].c[0] == format[up])
		{
			switch (format[up])
			{
				case 'i': a = va_arg(allvalue, int);
				print[down].f(&a);
				left++;
				break;
				case 'f': b = va_arg(allvalue, double);
				print[down].f(&b);
				left++;
				break;
				case 'c': c = va_arg(allvalue, int);
				print[down].f(&c);
				left++;
				break;
				case 's': d = va_arg(allvalue, char *);
				print[down].f(d);
				left++;
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

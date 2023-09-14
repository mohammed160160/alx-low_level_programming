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
void* space;
va_list allvalue;
format selection[] = {{"s",, "c", "i", "f"};
int up = 0;

va_start(allvalue, (strlen(format) + 1));

while(count < (strlen(format) + 1))
{
space = va_arg()

if (format[up] == s || format[up] == i || format[up] == f || format[up] == c)
{
selection();
}

count++;
}

va_end(allvalue);
printf("\n");
}


/**
 * print_all - prints all argument in the format specified
 * @*: to ensure format doesnt change
 * @format: The format for each argument
 * @...: The arguments
 * Return: Nothing since it's a print function
 */

void floatprint(float f)
{	
printf("%f", f)
}



/**
 * print_all - prints all argument in the format specified
 * @*: to ensure format doesnt change
 * @format: The format for each argument
 * @...: The arguments
 * Return: Nothing since it's a print function
 */

void stringprint(char *s)
{
printf("%s", s)
}

/**
 * print_all - prints all argument in the format specified
 * @*: to ensure format doesnt change
 * @format: The format for each argument
 * @...: The arguments
 * Return: Nothing since it's a print function
 */

void characterprint(char c)
{
printf("%c", c)
}

/**
 * print_all - prints all argument in the format specified
 * @*: to ensure format doesnt change
 * @format: The format for each argument
 * @...: The arguments
 * Return: Nothing since it's a print function
 */

void integerprint(int i)
{
printf("%i", i)
}	

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
int up = 0;
int down = 0;
void* space;

printer print[] = {{"s",stringprint},{"c",characterprint} ,{"i", integerprint}
,{"f", floatprint}};

va_start(allvalue, format);

while(format[up] != '\0')
{
down = 0;
space = va_arg(allvalue, void*);

	while(print[down].c[0] != '\0')
	{
		if (strcmp(print[down].c, &format[up]) == 0)	
		{
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
 * print_all - prints all argument in the format specified
 * @*: to ensure format doesnt change
 * @format: The format for each argument
 * @...: The arguments
 * Return: Nothing since it's a print function
 */

void floatprint(void* f)
{	
printf("%f", *(float*)f);
}



/**
 * print_all - prints all argument in the format specified
 * @*: to ensure format doesnt change
 * @format: The format for each argument
 * @...: The arguments
 * Return: Nothing since it's a print function
 */

void stringprint(void* s)
{
printf("%s", (char*)s);
}

/**
 * print_all - prints all argument in the format specified
 * @*: to ensure format doesnt change
 * @format: The format for each argument
 * @...: The arguments
 * Return: Nothing since it's a print function
 */

void characterprint(void* c)
{
printf("%c", *(char*)c);
}

/**
 * print_all - prints all argument in the format specified
 * @*: to ensure format doesnt change
 * @format: The format for each argument
 * @...: The arguments
 * Return: Nothing since it's a print function
 */

void integerprint(void* i)
{
printf("%i", *(int*)i);
}	

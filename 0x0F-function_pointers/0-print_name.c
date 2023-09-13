#include <stdio.h>
#include "function_pointers.h"


/**
 * print_name - Prints a name(being a bridge between 2 functions and
 * the main function using function pointers)
 * @name: The name in question
 * @f: The style of the writting
 * Return: Nothing
 */

void print_name(char *name, void (*f)(char *))
{

if (name == NULL)
{
return;
}

if (f == NULL)
{
return;
}

f(name);
}


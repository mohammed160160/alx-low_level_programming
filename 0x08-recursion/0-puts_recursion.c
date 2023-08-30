#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - Prints out the string pointed to by s
 * @s: Pointer to the string
 * Return: Always 0.
 */

void _puts_recursion(char *s)
{

if (*s == '\0')
{
_putchar('\n');
}

if (*s != '\0')
{
_putchar(*s);
s++;
_puts_recursion(s);
}


}

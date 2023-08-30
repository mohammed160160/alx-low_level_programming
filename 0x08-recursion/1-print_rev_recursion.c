#include "main.h"
#include <stdio.h>

/**
 * _puts_rev_recursion - Prints out the string pointed to by s in reverse
 * @s: Pointer to the string
 * Return: Always 0.
 */

void _print_rev_recursion(char *s)

{

if (*s == '\0')
{
_putchar('\n');
}

if (*s != '\0')
{
_putchar(*s);
s++;
_print_rev_recursion(s);
}


}

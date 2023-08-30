#include "main.h"
#include <stdio.h>

/**
 * _print_rev_recursion - Prints out the string pointed to by s in reverse
 * @s: Pointer to the string
 * Return: Always 0.
 */

void _print_rev_recursion(char *s)

{
int x = 0;

x = lengthforrev(s, x);
printingrev(s, x);

}

/**
 * lengthforrev - finds the length of the string
 * @l: The length of the string
 * @s: Pointer to the string
 * Return: Always 0.
 */

int lengthforrev(char *s, int l)

{

if (*s == '\0')
{
return (l);
}

if (*s != '\0')
{
l++;
s++;
}

return (lengthforrev(s, l));

}

/**
 * printingrev - Prints out the string in reverse
 * @l: The length of the string
 * @s: Pointer to the string
 * Return: Always 0.
 */

void printingrev(char *s, int l)

{

if (l != 0)
{
_putchar(*(s + l - 1));
l--;
printingrev(s, l);
}

}

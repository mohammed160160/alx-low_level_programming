#include "main.h"
#include <stdio.h>

/**
 * wildcmp - checks if 2 strings are identical and one of them having
 * special symbols
 * @s1:The pointer to the string without special cases
 * @s2:The pointer to the special case string
 * Return: Always 0.
 */

int wildcmp(char *s1, char *s2)
{
if (*s2 == '*' && *(s2 + 1) == '\0')
{
return (1);
}

if (*s1 == '\0')
{
	if (*s2 == '\0')
	{ return (1); }
	else
	{ return (0); }
}

if (*s1 == *s2)
{
return (wildcmp(s1 + 1, s2 + 1));
}

if (*s2 == '*')
{
return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2) || wildcmp(s1 + 1, s2));
}

return (0);
}

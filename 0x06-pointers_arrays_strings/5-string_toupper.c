#include "main.h"
#include <stdio.h>

/**
 * *string_toupper - turns any small letter in a string into a capital
 * @s: The pointer to the string
 * Return: The pointer
 */


char *string_toupper(char *s)
{
int x;

x = 0;

while (s[x] != '\0')
{
	if (s[x] >= 'a' && s[x] <= 'z')
	{
	s[x] -= 32;
	}
	x++;
}
return (s);
}

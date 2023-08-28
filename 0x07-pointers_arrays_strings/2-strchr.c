#include "main.h"
#include <stdio.h>

/**
 * *_strchr - Searches for the first occurance of an element c in
 * the string and prints out everything after it
 * @s: The pointer to the string
 * @c: The character being searched in the string
 * Return: A pointer to the memory area s
 */

char *_strchr(char *s, char c)
{
int x = 0;


while (s[x])
{
	if (s[x] == c)
	{
	return (s + x);
	}
x++;
}

return (s + 2);
}
